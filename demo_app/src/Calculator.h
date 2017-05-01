#include <vector>

class Calculator {
private:
    std::vector<int> stack;

public:
    void push(int value);
    int pop();
    void sum();

    void printStack();
};
