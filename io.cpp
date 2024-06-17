#include <iostream>
#include "cppSimpleCalculator.h"

using namespace std;

float getNumber()
{
    cout << "Enter a number: ";
    float number;
    cin >> number;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the newline character from the input buffer

    return number;
}

void writeAnswer()
{
    cout << "The answer is: " << result;
}

bool isFirstNumber(float x)
{
    return x != 0;
}

bool isValidOperator(char x)
{
    if (strchr(operandList, x))
        return true;
    else
    {
        cout << "Not a valid operand\n";
        return false;
    }
}

char getOperator()
{
    char x;
    cout << "Enter operator: ";
    cin.get(x);
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the newline character from the input buffer

    return x;
}