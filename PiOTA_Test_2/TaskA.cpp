//���, �����, ��� ���
//���������������� � ������ ������ ����������
//��2 - �������� ���������
//����1-6, ��������� ��������� ���������
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
