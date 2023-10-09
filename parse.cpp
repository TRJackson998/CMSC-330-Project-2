/*
Jackson, Terrence
CMSC 330 Project 2
10.09.2023

CMSC 330 Advanced Programming Languages
Project 2 Skeleton
UMGC CITE
Spring 2023

This file contains the body of the function parseName. That function consumes all alphanumeric
or underscore characters until the next whitespace and returns the name that those characters form.
Throws a variable exception if the first character is an underscore.

Additions:
    allow underscore characters in variable names
    throw an error if the first char is an underscore
*/

#include <cctype>
#include <sstream>
#include <string>
using namespace std;

#include "parse.h"
#include "variableException.h"

string parseName(stringstream &in)
{
    char alnum;
    char underscore = '_';
    int count = 0;
    string name = "";

    in >> ws;
    while ((isalnum(in.peek())) || (in.peek() == underscore))
    {

        if ((count == 0) && (in.peek() == underscore))
        {
            throw VariableException("underscore");
        }
        in >> alnum;
        name += alnum;
        count += 1;
    }
    return name;
}