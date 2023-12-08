# Makefile

CXX := g++
CXXFLAGS := -std=c++11 -Wall

# Source files
NAMESPACE_SRC := namespace.cpp
OOP_SRC := oop.cpp

# Object files
NAMESPACE_OBJ := $(NAMESPACE_SRC:.cpp=.o)
OOP_OBJ := $(OOP_SRC:.cpp=.o)

# Executables
NAMESPACE_EXEC := namespace_program
OOP_EXEC := oop_program

# Default target
all: $(NAMESPACE_EXEC) $(OOP_EXEC)

# Rule to build executables
$(NAMESPACE_EXEC): $(NAMESPACE_OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OOP_EXEC): $(OOP_OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to build object files from source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(NAMESPACE_OBJ) $(NAMESPACE_EXEC) $(OOP_OBJ) $(OOP_EXEC)

