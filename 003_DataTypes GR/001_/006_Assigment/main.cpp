#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    // Для целых типов не происходит преобразование типа результата арифметических операций
    // Присвоение со сложением
    int operand1 = 10;
    operand1 = operand1 + 5;
    operand1 += 5;  // краткая форма записи
    cout << operand1 << endl;

    // присвоение с вычитанием
    int operand2 = 10;
    operand2 = operand2 - 5;
    operand2 -= 5;
    cout << operand2 << endl;

    // присвоение с умножением
    int operand3 = 10;
    operand3 = operand3 * 5;
    operand3 *= 5;
    cout << operand3 << endl;

    // присвоение с делением
    int operand4 = 10;
    operand4 = operand4 / 5;
    operand4 /= 5;
    cout << operand4 << endl;

    // присвоение с получением остатка от деления
    int operand5 = 10;
    operand5 = operand5 % 5;
    operand5 %= 5;
    cout << operand5 << endl;

    // Для вещественных типов не происходит преобразование типа результата арифметических операций
    // присвоение с делением
    double operand6 = 3;
    operand6 = operand6 / 2;
    operand6 /= 2;
    cout << operand6 << endl;

    // присвоение с делением
    float operand7 = 7;
    operand7 = operand7 / 3;
    operand7 /= 3;
    cout << operand7 << endl;

    // Задержка
    cin.get();
    return 0;
}

