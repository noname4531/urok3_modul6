#include<iostream>
#include<locale.h>
#include<math.h>
#include <time.h>
using namespace std;
#include"Header.h"

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "������ ����� ������� :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		/*�������� ������� int f(int m2, int m1, int m0), � ������� ������ �������� ���� ���� ���������� �� ���������.
		��� ������� ��������� � ���������� ����������� �����, ������ (�����), ������ (�������) � ������ (�������)
		����� �������� ����� �������������� m2, m1, m0. ��������� ���������� ������� ���, ����� ����� ����������
		��������� x=f() �������� x ��������� 567.
		*/
		int m2, m1, m0;

		int result = f(&m2, &m1, &m0);

		cout << result << endl;

	}break;
	case 2:
	{
		/*�������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������. ����������������� ������ ������������� �������
		*/
		int a = 15, b = 14, c = 12;

		int result1, result2;
		result1 = peregruj(&a, &b);
		result2 = peregruj(&a, &b, &c);
		cout << "result 1=" << result1 << endl;
		cout << "result 2=" << result2 << endl;

	}break;
	case 3:
	{
		//��������� int u = f(3, 4); double v = f(20.5, 10.5); myofs << �u = � << u << � v = � << v << endl; 
		//���� � ��������� u = 7 v = 10 (�.�.�������������� ����� � ������������ ����� ����������).
		//�������� ������� f(�, �).
		int a = 3, b = 4;
		float d = 20.5;
		float f = 10.5;
		int u, v;
		u = peregruj(&a, &b);
		v = peregruj(&d, &f);
		cout << "u=" << u << endl << "v=" << v << endl;
	}break;
	case 4:
	{
		/*�������� ������� f(double& a, double& b, double c, double q), ������� ���������� ������ �������������� ������������,
		���������� �������� ����� �, � ������ ���� q (��������).  */
		double a, b, c, q;
		cin >> c;
		cin >> q;
		int result = gipatenuza(&a, &b, c, q);
		cout << a << "===" << ceil(a) << endl;
		cout << b << "===" << ceil(b) << endl;

	}break;
	case 5:
	{
		/*�������� ������� f(double* a, double* b, double c, double q),
		������� ���������� ������ �������������� ������������, ���������� �������� ����� �, � ������ ���� q (��������).*/
		double a, b, c, q;
		cin >> c;
		cin >> q;
		int result = gipatenuza(&a, &b, c, q);
		cout << a << "===" << ceil(a) << endl;
		cout << b << "===" << ceil(b) << endl;
	}break;
	case 6:
	{
		/*���� ������ ���� � �������� �������������� ����������. �������� ����������� ������� ��� ����������:
		n-�� ����� ����������;
		����� n ������ ������ ����������.
		*/

		int N = 3;
		int dif = 7;
		int first = 1;
		cout << member(&first, &dif, N - 1) << endl;
		cout << summa(&first, &dif, N - 1) << endl;
	}break;
	case 7:
	{
		/*���� ������ ���� � ����������� �������������� ����������. �������� ����������� �������:
		���������� n-�� ����� ����������
		���������� ����� n ������ ������ ����������
		*/
		int N = 3;
		int dif = 7;
		int first = 1;
		cout << member(&first, &dif, N - 1) << endl;
		cout << summa(&first, &dif, N - 1) << endl;
	}break;
	case 8:
	{
		/*�������� ����������� ������� ��� ���������� ������������� �������� ������� �� n ���������
		*/
		int mas, len = 10;
		fillArr(&mas, &len);
		printArr(&mas, &len);
		int result = maxarr(&mas, &len);
		cout << "max element=" << result << endl;

	}break;
	case 9:
	{
		/*�������� ����������� ������� ��� ���������� ������� ������������� �������� ������� �� n ���������*/
		int mas, len = 10;
		fillArr(&mas, &len);
		printArr(&mas, &len);
		int result = maxarr(&mas, &len);
		cout << "max element=" << result << endl;

	}break;
	case 10:
	{
		/*��� ������ ����� ����� A. ����� ����� ������������� � ������������� ��������� �������, ��������� ������� ����������� �����
		*/
		int mas, len = 10;
		fillArr(&mas, &len);
		printArr(&mas, &len);
		sumArr(&mas, &len);

	}break;
	case 11:
	{
		/*���� ��� ����������� �����. ����� ���������� ����� ������� ���� �����, ��������� ������� ����������� �������� �������.*/
		int n, m;
		int 	result = NOK(&n, &m);
		cout << result << endl;
	}break;
	}
}