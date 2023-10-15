//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//КР2 - Линейные алгоритмы
//КТбо1-6, Кравченко Александр Андреевич
//TaskA
//14.10.2023

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	cin >> a;
	b = a % 10;
	b += ((a / 100) % 10)*10;
	b += ((a / 10) % 10)*100;
	b += (a / 1000) * 1000;
	cout << b << endl;
}
