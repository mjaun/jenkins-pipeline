#include "Calculator.h"
#include <iostream>

void Calculator::push(int value) {
    stack.push_back(value);
}

int Calculator::pop() {
    int value = stack.back();
    stack.pop_back();
    return value;
}

void Calculator::sum() {
    if (stack.size() < 2) {
        return;
    }

    int y = pop();
    int x = pop();
    push(x + y);
}

void Calculator::printStack() {
    for (int value : stack) {
        std::cout << value << std::endl;
    }
}
