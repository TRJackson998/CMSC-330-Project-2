/*
Jackson, Terrence
CMSC 330 Project 2
10.07.2023

This file contains the class definition of the Modulus class, which is a subclass of SubExpression,
which in turn is a subclass of the Expression. Because both of its functions are one line functions,
they are implemented as inline functions. Its constructor initializes the left and right subexpressions
it inherits from SubExpression by calling the constructor of the SubExpression class. Because
it is an indirect subclass of Expression it must implement the evaluate function, which it does
by returning the modulus of the values of the two subexpressions. Because modulus does not work on doubles,
both values are static cast to integers.
*/
class Modulus : public SubExpression
{
public:
    Modulus(Expression *left, Expression *right) : SubExpression(left, right) {}
    double evaluate() { return static_cast<int>(left->evaluate()) % static_cast<int>(right->evaluate()); };
};