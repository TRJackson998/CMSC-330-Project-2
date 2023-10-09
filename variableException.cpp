/*
Jackson, Terrence
CMSC 330 Project 2
10.09.2023

This file contains the body of the constructor contained in the VariableException class.
The constructor parses the string argument passed in and throws the appropriate
error message.
*/
#include <string>
using namespace std;

#include "variableException.h"

VariableException::VariableException(string error)
{
    if (error == "underscore")
    {
        throw string("Error: Received variable name that starts with an underscore.");
    }
    else if (error == "uninitialized")
    {
        throw string("Error: Tried to use variable without initializing.");
    }
    else if (error == "reinitialized")
    {
        throw string("Error: Initialized same variable twice.");
    }
};