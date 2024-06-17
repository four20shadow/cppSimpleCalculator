#include <iostream>
#include "cppSimpleCalculator.h"

using namespace std;

char operandList[100] = { "+-*/^s" };
float result = 0.0000;
float tempResult;

int main()
{
	char operand;
	if (result == 0.0000)
	{
		float tempFirstNumber;
		tempFirstNumber = getNumber();

		operand = getOperator();
		while (operand != '=')
		{
			if (isValidOperator(operand))
			{
				switch (operand)
				{
				case '+':
					if (isFirstNumber(tempFirstNumber))
					{
						add(tempFirstNumber);
					}
					add(getNumber());
					break;
				case '-':
					if (isFirstNumber(tempFirstNumber))
					{
						substract(tempFirstNumber);
					}
					substract(getNumber());
					break;
				case '*':
					if (isFirstNumber(tempFirstNumber))
					{
						result = 1;
						multiply(tempFirstNumber);
					}
					multiply(getNumber());
					break;
				case '/':
					divide(tempFirstNumber, getNumber());
					break;
				case '^':
					riseToPower(tempFirstNumber, getNumber());
					break;
				case 's':
					if (isFirstNumber(tempFirstNumber))
					{
						squareRoot(tempFirstNumber);
						break;
					}
					squareRoot(tempFirstNumber);
					break;
				default:
					break;
				}
				tempFirstNumber = 0;
			}
			operand = getOperator();
			if (operand == '=')
				break;
		}
	}
	writeAnswer();
	cin.get();

	return 0;
}


