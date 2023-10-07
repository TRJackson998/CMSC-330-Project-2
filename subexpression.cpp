/*
Jackson, Terrence
CMSC 330 Project 2
10.07.2023

CMSC 330 Advanced Programming Languages
Project 2 Skeleton
UMGC CITE
Spring 2023

This file contains the body of the functions contained in The SubExpression class, which includes
the constructor that initializes the left and right subexpressions and the static function parse
parses the subexpression. Addition and subtraction are the two operators that are implemented.

Additions:
    include files for binary operators
    add binary operators to case statement
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
#include "power.h"

SubExpression::SubExpression(Expression *left, Expression *right)
{
    this->left = left;
    this->right = right;
}
Expression *SubExpression::parse(stringstream &in)
{
    Expression *left;
    Expression *right;
    char operation, paren;

    left = Operand::parse(in);
    in >> operation;
    right = Operand::parse(in);
    in >> paren;
    switch (operation)
    {
    case '+':
        return new Plus(left, right);
    case '-':
        return new Minus(left, right);
    case '*':
        return new Multiply(left, right);
    case '/':
        return new Divide(left, right);
    case '%':
        return new Modulus(left, right);
    case '^':
        return new Power(left, right);
    case '<':
        return new Minimum(left, right);
    case '>':
        return new Maximum(left, right);
    case '&':
        return new Average(left, right);
    }
    return 0;
}
