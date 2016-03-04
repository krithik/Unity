
#include "ProductionCode.h"

int Counter = 0;
int NumbersToFind[9] = { 0, 34, 55, 66, 32, 11, 1, 77, 888 }; //some obnoxious array to search that is 1-based indexing instead of 0.

// This function is supposed to search through NumbersToFind and find a particular number.  
// If it finds it, the index is returned.  Otherwise 0 is returned which sorta makes sense since 
// NumbersToFind is indexed from 1.  Unfortunately it's broken 
// (and should therefore be caught by our tests)
int FindFunction_WhichIsBroken(int NumberToFind)
{
    int i = 0;
    while (i < 9) 
    {    	
        if (NumbersToFind[i] == NumberToFind){        	
            return i;
        }
        i++;
    }

    return 0;
}

int FunctionWhichReturnsLocalVariable(void)
{
    return Counter;
}
