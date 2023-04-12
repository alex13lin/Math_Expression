//
// Created by a1016 on 2023/4/6.
//

#ifndef ARITHMETIC_INFIX_H
#define ARITHMETIC_INFIX_H

#include "MathExpression.h"
#include <cstring>

class Infix : public MathExpression {
public:
    Infix();

    ~Infix() override;

    void input_expression() override;

    void output_expressions() override;

private:
    void to_prefix() override;

    void to_postfix() override;
};


#endif //ARITHMETIC_INFIX_H
