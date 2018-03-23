#include<iostream>
#include<locale.h>
#include <time.h>
#include<math.h>
#include"Header.h"
using namespace std;
//Ќапишите функцию int f(int m2, int m1, int m0), в которой заданы значени€ всех трех параметров по умолчанию.
//Ёто функци€ вычисл€ет и возвращает натуральное число, перва€(сотни), втора€(дес€тки) и треть€(единицы) цифры
//которого равны соответственно m2, m1, m0.“ребуетс€ определить функцию так,
//чтобы после выполнени€ оператора x = f() значение x равн€лось 567.

//Ќапишите несколько функций с одним именем int f(Е) и с разными наборами параметров.
//ѕродемонстрируйте работу перегруженных функций


//ќператоры int u = f(3, 4); double v = f(20.5, 10.5); myofs << Фu = Ф << u << Ф v = Ф << v << endl; 
//дают в результте u = 7 v = 10 (т.е.соответственно сумму и произведение своих параметров).
//Ќапишите функции f(Е, Е).



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

/*Ќапишите функцию f(double* a, double* b, double c, double q),
котора€ возвращает катеты пр€моугольного треугольника, гипотенуза которого равна с, а острый угол q (градусов).*/
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