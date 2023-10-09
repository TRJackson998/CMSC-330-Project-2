/*
Jackson, Terrence
CMSC 330 Project 2
10.08.2023

This file contains the body of the function contained in the Ternary class.
The evaluate function returns the right (or second) subexpression when the
first is not 0, and returns the third subexpression when the first is equal to 0.
*/

#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "ternary.h"

double Ternary::evaluate()
{
    if (this->left->evaluate() != 0)
    {
        return this->right->evaluate();
    }
    else
    {
        return this->third->evaluate();
    }
}