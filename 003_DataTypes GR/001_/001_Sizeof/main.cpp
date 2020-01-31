// oператор sizeof('тип [переменнаja]') в качестве параметра принимает тип, и возвращает количество байт памjaти занимаемое типом

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Bool: " << sizeof(bool) << endl;
    cout << "Char: " << sizeof(char) << endl;
    cout << "Short: " << sizeof(short) << endl;
    cout << "Int: " << sizeof(int) << endl;
    cout << "Long long: " << sizeof(long long) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Double: " << sizeof(double) << endl;

    int a = 4;

    cout << sizeof a << endl;

    // zaderzka
    cin.get();
    return 0;
}
