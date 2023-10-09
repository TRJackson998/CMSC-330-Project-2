/*
Jackson, Terrence
CMSC 330 Project 2
10.09.2023

CMSC 330 Advanced Programming Languages
Project 2 Skeleton
UMGC CITE
Spring 2023

This file contains the class definition of the Negation class, which is a subclass of Expression.
Because both of its functions are one line functions, they are implemented as inline functions.
Its constructor initializes the left expression. Because it is a subclass of Expression it must
implement the evaluate function, which it does by returning the value of its expression multiplied by -1.
*/

class Negation : public Expression
{
public:
    Negation(Expression *left) { this->left = left; }
    double evaluate() { return left->evaluate() * -1; };

protected:
    Expression *left;
};