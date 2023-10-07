/*
Jackson, Terrence
CMSC 330 Project 2
10.07.2023

CMSC 330 Advanced Programming Languages
Project 2 Skeleton
UMGC CITE
Spring 2023

This file contains the body of the function contained in the Average class.
The evaluate function adds together the two subexpressions, divides them by
2, and returns the result
*/

#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "average.h"

double Average::evaluate()
{
    double this_left = this->left->evaluate();
    double this_right = this->right->evaluate();

    double sum = this_left + this_right;
    return sum / 2;
}