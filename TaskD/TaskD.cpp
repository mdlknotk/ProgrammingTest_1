	//ЮФУ, ИКТИБ, МОП ЭВМ
	//Программирование и основы теории алгоритмов
	//КР2 - Линейные алгоритмы
	//КТбо1-6, Кравченко Александр Андреевич
	//TaskD
	//14.10.2023

	#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <cstdio>

	using namespace std;

	int main()
	{
		int x, y,zY,zX,cY,cX,min1=0,max1=0;
		cin >> x>> y;
		(x > y) ? max1 = x : max1 = y;
		(x > y) ? min1 = y : min1 = x;
		(x % 2 < 0) ? cX = -1 * (x % 2) : cX =  (x % 2);
		(y% 2 < 0) ? cY = -1 * (y % 2) : cY =  (y % 2);
		(x == 1 || x == -1) ? cX == 1 : cX == 1;
		(y == 1 || y == -1) ? cY == 1 : cY == 1;
		(x > 0) ? zX = 1 : zX = 0;
		(y > 0) ? zY = 1 : zY = 0;
		(zX == zY) ? (cY == cX) ? cout << 0 : cout << max1 : (cY == cX) ? cout << min1 : cout << 0;
	}
