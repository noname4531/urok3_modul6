#include<iostream>
#include<locale.h>
#include <time.h>
#include<math.h>
#include"Header.h"
using namespace std;
//�������� ������� int f(int m2, int m1, int m0), � ������� ������ �������� ���� ���� ���������� �� ���������.
//��� ������� ��������� � ���������� ����������� �����, ������(�����), ������(�������) � ������(�������) �����
//�������� ����� �������������� m2, m1, m0.��������� ���������� ������� ���,
//����� ����� ���������� ��������� x = f() �������� x ��������� 567.

//�������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������.
//����������������� ������ ������������� �������


//��������� int u = f(3, 4); double v = f(20.5, 10.5); myofs << �u = � << u << � v = � << v << endl; 
//���� � ��������� u = 7 v = 10 (�.�.�������������� ����� � ������������ ����� ����������).
//�������� ������� f(�, �).



void fillArr(int *mas, int*len)
{
	for (int i = 0; i <= *len; i++)
	{
		mas[i] = -10 + rand() % 30;
	}
}
void printArr(int *mas, int*len)
{
	for (int i = 0; i <= *len; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}
void sumArr(int *mas, int *len)
{
	int sum = 0;
	for (int i = 0; i <= *len; i++)
	{
		sum += mas[i];
	}
	cout << sum << endl;
}
int NOK(int *n, int *m)
{
	cin >> *n >> *m;
	while (*n != 0 && *m != 0)
	{
		if (*n > *m)
			*n = *n%*m;
		else
			*m = *m%*n;

	}
	return *n + *m;
}
int maxarr(int *mas, int *len)
{
	int max = mas[0];
	for (int i = *mas; i <= *len; i++)
	{
		if (mas[i]>max)
			max = mas[i];
	}
	return max;
}
int  f(int *m2, int *m1, int *m0)
{
	int x;
	cin >> x;

	*m2 = x % 1;
	return *m2;
	*m1 = x % 10;
	return *m1;
	*m0 = x % 100;
	return *m0;

}
int peregruj(int *a, int *b)
{
	return *a + *b;
}
int peregruj(int *a, int *b, int *c)
{
	return *a + *b + *c;
}
int peregruj(float*d, float *f)
{
	return *d - *f;
}

/*�������� ������� f(double* a, double* b, double c, double q),
������� ���������� ������ �������������� ������������, ���������� �������� ����� �, � ������ ���� q (��������).*/
int gipatenuza(double* a, double* b, double c, double q)
{
	/*cin >> c;
	*a = (sqrt(pow(c, 2) - pow(*b, 2)));
	return *a;*/
	/*
	printf("\n");
	*b = (sqrt(pow(c, 2) - pow(*a, 2)));
	return *b;
	printf("\n");*/

	*a = c*sin(q);
	return *a;
	*b = (sqrt(pow(c, 2) - pow(*a, 2)));
	return *b;
}

int member(int *memb, int *dif, int n)
{
	if (n)
		*memb = *dif + member(memb, dif, n - 1);
	return *memb;
}
int summa(int *sum, int *dif, int n)
{
	if (n)
		*sum += (n*(*dif)) + summa(sum, dif, n - 1);
	return *sum;
}



//int member(int *memb, int *dif, int n)
//{
//	if (n)
//		*memb = *dif + member(memb, dif, n - 1);
//	return *memb;
//}
//
//int summa(int sum, int dif, int n)
//{
//	if (n)
//		sum += (n*dif) + summa(sum, dif, n - 1);
//	return sum;
//}
//
//int qwdxm()
//{
//	int N = 3;
//	int differ = 7;
//	int first = 1;
//	cout << member(first, differ, N - 1) << endl;
//	cout << summa(first, differ, N - 1) << endl;
//	return 0;
//}