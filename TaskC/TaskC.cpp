//���, �����, ��� ���
//���������������� � ������ ������ ����������
//��2 - �������� ���������
//����1-6, ��������� ��������� ���������
//TaskC
//14.10.2023

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a,dop=0,obr,i_a;
	�in >> a;
	i_a = a;
	(a > 0) ? a=a : a*=-1;
	(i_a > 0) ? dop = obr = a : obr = ~a;
	(i_a == dop) ? obr = obr : dop = obr +1;
	(i_a == a) ? a = a : a = a + (1 << 31);
	printf("%08X  %08X %08X", a, obr, dop);
	return 0;
}
