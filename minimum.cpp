/*
Jackson, Terrence
CMSC 330 Project 2
10.07.2023

This file contains the body of the function contained in the Minimum class.
The evaluate function returns the left subexpression when it is less than the right,
and returns the right subexpression otherwise
*/

#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "minimum.h"

double Minimum::evaluate()
{
    double this_left = this->left->evaluate();
    double this_right = this->right->evaluate();

    if (this_left < this_right)
    {
        return this_left;
    }
    else
    {
        return this_right;
    }
}