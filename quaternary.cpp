/*
Jackson, Terrence
CMSC 330 Project 2
10.08.2023

This file contains the body of the function contained in the Quaternary class,
as well as the constructor for the class. The constructor initializes the left
and right subexpressions by calling the constructor of the SubExpression class,
and initializes the third and fourth subexpressions. The evaluate function
returns the right (or second) subexpression when the first is less than 0,
returns the third subexpression when the first equals 0, and returns the
fourth subexpression whrn the first is greater than 0.
*/

#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "quaternary.h"

Quaternary::Quaternary(Expression *left, Expression *right, Expression *third, Expression *fourth) : SubExpression(left, right)
{
    this->third = third;
    this->fourth = fourth;
}

double Quaternary::evaluate()
{
    double this_left = this->left->evaluate();
    if (this_left < 0)
    {
        return this->right->evaluate();
    }
    else if (this_left == 0)
    {
        return this->third->evaluate();
    }
    else // left > 0
    {
        return this->fourth->evaluate();
    }
}