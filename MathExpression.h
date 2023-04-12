//
// Created by a1016 on 2023/4/6.
//

#ifndef ARITHMETIC_MATHEXPRESSION_H
#define ARITHMETIC_MATHEXPRESSION_H

#include <iostream>

class MathExpression {
protected:
    char *prefix, *infix, *postfix, *expression_name;
    int size_, input_length;

    virtual void to_infix();

    virtual void to_prefix();

    virtual void to_postfix();

    virtual int priority(char *, int);

public:
    MathExpression();

    virtual ~MathExpression();

    virtual void input_expression();

    virtual void output_expressions();
};


#endif //ARITHMETIC_MATHEXPRESSION_H
