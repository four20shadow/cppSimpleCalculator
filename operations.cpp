#include <iostream>
#include "cppSimpleCalculator.h"

void add(float x)
{
	result = result + x;
}

void substract(float x)
{
	result = result - x;
}

void multiply(float x)
{
	result = result * x;
}

void divide(float first, float second)
{
    if (second == 0)
    {
        std::cout << "Cannot divide by 0.\n";
        second = getNumber();
        divide(first, second);
    }
    else
        if (result == 0 && first != 0)
            result = first / second;
        else
            result /= second;
}

void riseToPower(float first, float second)
{
    if (result == 0 && first != 0)
        result = pow(first, second);
    else
        result = pow(result, second);
}

void squareRoot(float x)
{
    if (result == 0)
    {
        result = result + x;
        result = sqrt(result);
    }
    else
	    result = sqrt(result);
}