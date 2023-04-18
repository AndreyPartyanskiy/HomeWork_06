#include "Function.h"
#include <iostream>
#include <cmath>

void summ(double a, double b)
{
    std::cout << a << " сложить " << b << " = " <<(a + b) << std::endl;
}

void subtraction(double a, double b)
{
    std::cout << a << " вычесть " << b << " = " << (a - b) << std::endl;
}

void multiply(double a, double b)
{
    std::cout << a << " умножить на " << b << " = " << (a * b) << std::endl;
}

void division(double a, double b)
{
    std::cout << a << " разделить на " << b << " = " << (a / b) << std::endl;
}

void exponentiation(double a, double b)
{
    std::cout << a << " в степени " << b << " = " << (pow(a, b)) << std::endl;
}
