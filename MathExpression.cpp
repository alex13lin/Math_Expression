//
// Created by a1016 on 2023/4/6.
//

#include "MathExpression.h"

MathExpression::MathExpression() {
    expression_name = new char[20];
    size_ = 80;
    input_length = 0;
    infix = new char[size_];
    prefix = new char[size_];
    postfix = new char[size_];
}

MathExpression::~MathExpression() {
    delete[] expression_name;
    delete[] infix;
    delete[] prefix;
    delete[] postfix;
}

void MathExpression::input_expression() {
    std::cout << "Input " << expression_name << ":...";
}

void MathExpression::output_expressions() {

}

void MathExpression::to_infix() {

}

void MathExpression::to_prefix() {

}

void MathExpression::to_postfix() {

}

int MathExpression::priority(char *option, int index) {
    switch (option[index]) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

