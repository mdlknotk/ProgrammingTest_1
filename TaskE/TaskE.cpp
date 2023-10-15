//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//КР2 - Линейные алгоритмы
//КТбо1-6, Кравченко Александр Андреевич
//TaskE
//14.10.2023

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	unsigned long long  n,res,oper1,oper2;
	cin >> n;
	oper1 = n + 1;
	oper2 = n + 2;
	(n % 3 == 0) ? res = (n / 3) * oper1 * oper2 : (oper1 % 3 == 0) ? res = (oper1 / 3) * n * oper2 : (oper2 % 3 == 0) ? res = (oper2 / 3) * n * oper1 : res = 0;
	cout << res << '\n';
	return 0;
}