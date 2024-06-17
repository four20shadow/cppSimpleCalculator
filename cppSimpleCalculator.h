#pragma once

#include <math.h>
#include <cstring>

extern float result;
extern float tempFirstNumber;
extern char operandList[100];

float getNumber();
void writeAnswer();
char getOperator();

void add(float);
void substract(float);
void multiply(float);
void divide(float, float);
void riseToPower(float, float);
void squareRoot(float);

bool isFirstNumber(float);
bool isValidOperator(char);