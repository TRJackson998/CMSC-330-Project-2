/*
Jackson, Terrence
CMSC 330 Project 2
10.09.2023

CMSC 330 Advanced Programming Languages
Project 2 Skeleton
UMGC CITE
Spring 2023

This file contains the body of the functions contained in The SubExpression class, which includes
the constructor that initializes the left and right subexpressions and the static function parse
parses the subexpression. Addition and subtraction are the two operators that are implemented.

Additions:
    include header files and add to case statement logic for added operators:
        unary negation operator - required logic change to not read in right operand in every case
        binary operators - added *, /, %, ^, <, >, &
        ternary operator - required extra variable to hold third operand
        quaternary operator - required extra variable to hold fourth operand
*/

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "average.h"
#include "divide.h"
#include "plus.h"
#include "maximum.h"
#include "minimum.h"
#include "minus.h"
#include "modulus.h"
#include "multiply.h"
#include "negation.h"
#include "power.h"
#include "quaternary.h"
#include "ternary.h"

SubExpression::SubExpression(Expression *left, Expression *right)
{
    this->left = left;
    this->right = right;
}
Expression *SubExpression::parse(stringstream &in)
{
    Expression *left;
    Expression *right;
    Expression *third;
    Expression *fourth;
    char operation, paren;

    left = Operand::parse(in);
    in >> operation;
    switch (operation)
    {

    case '~':
        // unary op
        in >> paren;
        return new Negation(left);
    case '+':
        // binary ops
        right = Operand::parse(in);
        in >> paren;
        return new Plus(left, right);
    case '-':
        right = Operand::parse(in);
        in >> paren;
        return new Minus(left, right);
    case '*':
        right = Operand::parse(in);
        in >> paren;
        return new Multiply(left, right);
    case '/':
        right = Operand::parse(in);
        in >> paren;
        return new Divide(left, right);
    case '%':
        right = Operand::parse(in);
        in >> paren;
        return new Modulus(left, right);
    case '^':
        right = Operand::parse(in);
        in >> paren;
        return new Power(left, right);
    case '<':
        right = Operand::parse(in);
        in >> paren;
        return new Minimum(left, right);
    case '>':
        right = Operand::parse(in);
        in >> paren;
        return new Maximum(left, right);
    case '&':
        right = Operand::parse(in);
        in >> paren;
        return new Average(left, right);
    case '?':
        // ternary op
        right = Operand::parse(in);
        third = Operand::parse(in);
        in >> paren;
        return new Ternary(left, right, third);
    case '#':
        // quaternary op
        right = Operand::parse(in);
        third = Operand::parse(in);
        fourth = Operand::parse(in);
        in >> paren;
        return new Quaternary(left, right, third, fourth);
    }
    return 0;
}
