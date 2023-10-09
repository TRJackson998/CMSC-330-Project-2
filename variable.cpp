/*
Jackson, Terrence
CMSC 330 Project 2
10.09.2023

CMSC 330 Advanced Programming Languages
Project 2 Skeleton
UMGC CITE
Spring 2023

This file contains the body of the function contained in The Variable class. The evaluate function
looks up the value of a variable in the symbol table. If that value does not exist, throw a variable
exception stating that the variable is uninitialized. If the value does exist, return it.

Additions:
    check if variable is uninitialized and throw error if not
*/

#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"
#include "variableException.h"

extern SymbolTable symbolTable;

double Variable::evaluate()
{
    double lookUpValue = symbolTable.lookUp(name);
    if (lookUpValue == -1)
    {
        throw VariableException("uninitialized");
    }
    else
    {
        return lookUpValue;
    }
}