/*
Jackson, Terrence
CMSC 330 Project 2
10.08.2023

CMSC 330 Advanced Programming Languages
Project 2 Skeleton
UMGC CITE
Spring 2023

This file contains the class definition of the Negation class, which is a subclass of SubExpression,
which in turn is a subclass of the Expression. Because both of its functions are one line functions,
they are implemented as inline functions. Its constructor initializes the left and right subexpressions
it inherits from SubExpression by calling the constructor of the SubExpression class. Because
it is an indirect subclass of Expression it must implement the evaluate function, which it does
by returning the value of its subexpression multiplied by -1.
*/

class Negation : public SubExpression
{
public:
    Negation(Expression *left, Expression *null) : SubExpression(left, null) {}
    double evaluate() { return left->evaluate() * -1; };
};