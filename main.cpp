#include <iostream>

#include "MathExpression.h"
#include "Infix.h"

int main() {
    MathExpression *math_expression = new Infix;
    math_expression->input_expression();
    math_expression->output_expressions();
    delete math_expression;
    return 0;
}
