/*
Jackson, Terrence
CMSC 330 Project 2
10.07.2023

CMSC 330 Advanced Programming Languages
Project 2 Skeleton
UMGC CITE
Spring 2023

This file contains the class definition of the Average class, which is a subclass of SubExpression,
which in turn is a subclass of the Expression. Its constructor initializes the left and right subexpressions
it inherits from SubExpression by calling the constructor of the SubExpression class. Because
it is an indirect subclass of Expression it must implement the evaluate function, whose body
is defined in average.cpp.
*/

class Average : public SubExpression
{
public:
    Average(Expression *left, Expression *right) : SubExpression(left, right) {}
    double evaluate();
};