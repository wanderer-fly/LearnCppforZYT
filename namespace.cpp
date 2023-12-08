#include <iostream>

using namespace std;

namespace A {
    void fuck() {
        cout << "Output namespace A" << endl;
    }
}

namespace B {
    void fuck() {
        cout << "Output namespace B" << endl;
    }
}

int main() {
    cout << "Namespace Test:" << endl;
    A::fuck();
    B::fuck();
    return 0;
}
