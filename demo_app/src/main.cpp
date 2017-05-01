#include "Calculator.h"
#include <string>

int main(int argc, char* argv[]) {
    Calculator calculator;

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];

        if (arg == "+") {
            calculator.sum();
        } else {
            calculator.push(std::stoi(arg));
        }
    }

    calculator.printStack();
    return 0;
}
