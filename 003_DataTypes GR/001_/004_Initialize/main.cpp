#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    //  »нициализаци¤ это первое присвоение значени¤ переменной
    // Ќа 10-й строке объ¤вл¤ем переменную max и инициализируем ее значением константы INT_MAX
    int max = INT_MAX;

    char ch = 'A';			// переменную ch инициализиируем символом ј
    ch = 'B';				// переменной ch присваиваем (измен¤ем) значение

    int b;					// обь¤вл¤ем переменную b типа int
    b = 10;					// переменную b инициализируем значением 10

    int c(255);				// создаем переменную с типа int  и инициализируем ее значением 255

    // ¬ —++11 по¤вилс¤ новый способ инициализации переменных, такой способ инициализации предоставл¤ет лучшую защиту от ошибок преобразовани¤ типов

    int d = { 2 };			// обьевл¤ем переменную d и инициализируем ее значением 2
    // int d = { }			// обь¤вл¤ем переменную d и инициализируем ее значением по умолчинию

    int e { 3 };			// обьевл¤ем переменную e и инициализируем ее значением 2
    //int e { }				// обь¤вл¤ем переменную e и инициализируем ее значением по умолчинию

    // «адержка
    cin.get();
    return 0;
}
