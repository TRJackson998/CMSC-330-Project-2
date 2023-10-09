/*
Jackson, Terrence
CMSC 330 Project 2
10.08.2023

This file contains the class definition of the Quaternary class, which is a subclass of SubExpression,
which in turn is a subclass of the Expression. Its constructor is declared here and defined in quaternary.cpp
because it requires multiple lines. Because it is an indirect subclass of Expression it must implement
the evaluate function, whose body is defined in quaternary.cpp.
*/
class Quaternary : public SubExpression
{
public:
    Quaternary(Expression *left, Expression *right, Expression *third, Expression *fourth);
    double evaluate();

protected:
    Expression *third;
    Expression *fourth;
};