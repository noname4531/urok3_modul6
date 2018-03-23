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
	cout << "Ведите номер задания :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		/*Напишите функцию int f(int m2, int m1, int m0), в которой заданы значения всех трех параметров по умолчанию.
		Это функция вычисляет и возвращает натуральное число, первая (сотни), вторая (десятки) и третья (единицы)
		цифры которого равны соответственно m2, m1, m0. Требуется определить функцию так, чтобы после выполнения
		оператора x=f() значение x равнялось 567.
		*/
		int m2, m1, m0;

		int result = f(&m2, &m1, &m0);

		cout << result << endl;

	}break;
	case 2:
	{
		/*Напишите несколько функций с одним именем int f(…) и с разными наборами параметров. Продемонстрируйте работу перегруженных функций
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
		//Операторы int u = f(3, 4); double v = f(20.5, 10.5); myofs << ”u = ” << u << ” v = ” << v << endl; 
		//дают в результте u = 7 v = 10 (т.е.соответственно сумму и произведение своих параметров).
		//Напишите функции f(…, …).
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
		/*Напишите функцию f(double& a, double& b, double c, double q), которая возвращает катеты прямоугольного треугольника,
		гипотенуза которого равна с, а острый угол q (градусов).  */
		double a, b, c, q;
		cin >> c;
		cin >> q;
		int result = gipatenuza(&a, &b, c, q);
		cout << a << "===" << ceil(a) << endl;
		cout << b << "===" << ceil(b) << endl;

	}break;
	case 5:
	{
		/*Напишите функцию f(double* a, double* b, double c, double q),
		которая возвращает катеты прямоугольного треугольника, гипотенуза которого равна с, а острый угол q (градусов).*/
		double a, b, c, q;
		cin >> c;
		cin >> q;
		int result = gipatenuza(&a, &b, c, q);
		cout << a << "===" << ceil(a) << endl;
		cout << b << "===" << ceil(b) << endl;
	}break;
	case 6:
	{
		/*Даны первый член и разность арифметической прогрессии. Написать рекурсивную функцию для нахождения:
		n-го члена прогрессии;
		суммы n первых членов прогрессии.
		*/

		int N = 3;
		int dif = 7;
		int first = 1;
		cout << member(&first, &dif, N - 1) << endl;
		cout << summa(&first, &dif, N - 1) << endl;
	}break;
	case 7:
	{
		/*Даны первый член и знаменатель геометрической прогрессии. Написать рекурсивную функцию:
		нахождения n-го члена прогрессии
		нахождения суммы n первых членов прогрессии
		*/
		int N = 3;
		int dif = 7;
		int first = 1;
		cout << member(&first, &dif, N - 1) << endl;
		cout << summa(&first, &dif, N - 1) << endl;
	}break;
	case 8:
	{
		/*Написать рекурсивную функцию для вычисления максимального элемента массива из n элементов
		*/
		int mas, len = 10;
		fillArr(&mas, &len);
		printArr(&mas, &len);
		int result = maxarr(&mas, &len);
		cout << "max element=" << result << endl;

	}break;
	case 9:
	{
		/*Написать рекурсивную функцию для вычисления индекса максимального элемента массива из n элементов*/
		int mas, len = 10;
		fillArr(&mas, &len);
		printArr(&mas, &len);
		int result = maxarr(&mas, &len);
		cout << "max element=" << result << endl;

	}break;
	case 10:
	{
		/*Дан массив целых чисел A. Найти суммы положительных и отрицательных элементов массива, используя функцию определения суммы
		*/
		int mas, len = 10;
		fillArr(&mas, &len);
		printArr(&mas, &len);
		sumArr(&mas, &len);

	}break;
	case 11:
	{
		/*Даны два натуральных числа. Найти наименьшее общее кратное этих чисел, используя функцию реализующую алгоритм Евклида.*/
		int n, m;
		int 	result = NOK(&n, &m);
		cout << result << endl;
	}break;
	}
}