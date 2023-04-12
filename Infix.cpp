//
// Created by a1016 on 2023/4/6.
//

#include "Infix.h"

Infix::Infix() {
    std::strcpy(expression_name, "infix");
}

Infix::~Infix() {

}

void Infix::input_expression() {
    MathExpression::input_expression();
    std::cin.getline(infix, size_);
    while (infix[input_length] != '\0')input_length++;
    infix[input_length] = '#';
    to_prefix();
    to_postfix();
}

void Infix::output_expressions() {
    std::cout << "\nInfix to prefix: ";
    for (int i = input_length; i >= 0; i--) std::cout << prefix[i];
    std::cout << "\nInfix to postfix: ";
    for (int i = 0; i < input_length; i++) std::cout << postfix[i];
}

void Infix::to_prefix() {
    char *stack = new char[size_];
    int i, j, top;
    for (i = input_length - 1, j = 0, top = 0; i >= 0; i--) {
        switch (infix[i]) {
            case ')':
                stack[++top] = infix[i];
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (priority(stack, top) > priority(infix, i))
                    prefix[j++] = stack[top--];
                stack[++top] = infix[i];
                break;
            case '(':
                while (stack[top] != ')') {
                    prefix[j++] = stack[top--];
                }
                top--;
                break;
            default:
                prefix[j++] = infix[i];
                break;
        }
    }
    while (top > 0) {
        prefix[j++] = stack[top--];
    }
    delete[] stack;
}

void Infix::to_postfix() {
    char *stack = new char[size_];
    int i, j, top;
    for (i = 0, j = 0, top = 0; infix[i] != '#'; i++) {
        switch (infix[i]) {
            case '(':
                stack[++top] = infix[i];
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (priority(stack, top) >= priority(infix, i))
                    postfix[j++] = stack[top--];
                stack[++top] = infix[i];
                break;
            case ')':
                while (stack[top] != '(') {
                    postfix[j++] = stack[top--];
                }
                top--;
                break;
            default:
                postfix[j++] = infix[i];
                break;
        }
    }
    while (top > 0) {
        postfix[j++] = stack[top--];
    }
    delete[] stack;
}



