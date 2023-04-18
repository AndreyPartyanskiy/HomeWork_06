// Homework_6.1.cpp 

#include <iostream>
#include "Function.h"
#include <windows.h>

int main()
{
    system("chcp 1251");
    system("cls");
    double a, b;
    int c;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите первое число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> c;

    switch (c)
    {
    case 1:
    {
        summ(a, b);
        break;
    }
    case 2:
    {
        subtraction(a, b);
        break;
    }
    case 3:
    {
        multiply(a, b);
        break;
    }
    case 4:
    {
         division(a, b);
        break;
    }
    case 5:
    {
         exponentiation(a, b);
        break;
    }
    default:
        break;
    } 
}
