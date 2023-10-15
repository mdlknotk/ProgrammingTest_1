//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//КР2 - Линейные алгоритмы
//КТбо1-6, Кравченко Александр Андреевич
//TaskB
//14.10.2023

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	float a;
	int b;
	cin >> a;
	int da = a + 1;
	a *= 100;
	b = a;
	b %= 100;
	(b == 50) ? (da%2==0)? cout<<da : cout<<da-1 : (b > 50) ? cout << da : cout << da - 1;
}
