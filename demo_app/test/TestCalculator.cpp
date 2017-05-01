#include <gtest/gtest.h>
#include "Calculator.h"

TEST(SumTest, Simple) {
    Calculator calculator;

    calculator.push(5);
    calculator.push(4);
    calculator.sum();

    EXPECT_EQ (9, calculator.pop());
}
