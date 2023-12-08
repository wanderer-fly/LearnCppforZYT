#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
        string name;
    public:
        // 成员变量
        int age;
        // 成员函数声明
        int getAge(void);
        string getName(void);

        void setAge(int age);
        void setName(string name);
        Animal(); // 构造函数
        ~Animal(); // 析构函数
};

Animal::Animal(void) {
    cout << "这是Animal的构造函数，在创建对象时执行" << endl;
}

Animal::~Animal(void) {
    cout << "这是Animal的析构函数，在删除对象时执行" << endl;
}

// 成员函数定义部分
int Animal::getAge(void) {
    return this->age;
}

string Animal::getName(void) {
    return this->name;
}

void Animal::setAge(int age) {
    this->age = age;
}

void Animal::setName(string name) {
    this->name = name;
}

class Human : public Animal {
    public:
        void speak(void) {
            cout << "我是人" << endl;
        }
};

int main() { 
    Human animal;
    animal.age = 17;
    animal.setName("张艺腾");
    cout << animal.getName() << "的age为：" << animal.age << endl;
    animal.speak();
}
