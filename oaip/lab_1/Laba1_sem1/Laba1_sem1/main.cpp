/*
Лабораторная работа №1. Линейные алгоритмы
Задание 1. Расчёт по двум формулам
Вариант 11
Студента группы 10702119 Старостина Павла Алексеевича
*/
/*
#include <windows.h>
#include <math.h>
#include <iostream>
const double pi = 3.14;

void main()
{
	double alpha;
	double result1;
	double result2;
	printf("Z1=ctg((5/4)pi)+(3/2)alpha)\n\n");
	printf("Z2=(1-tg(alpha))/(1+tg(alpha))\n\n");
	printf("Enter the alpha value: ");
	scanf("%f",&alpha);
	alpha = alpha*pi/180;
	result1 = cos((5/4)*pi+(3/2)*alpha)/sin((5/4)*pi+(3/2)*alpha);
	result2 = (1-tan(alpha))/(1+tan(alpha));
	printf("\nalpha = %.3f, Z1 = %.3f, Z2 = %.3f\n",alpha, result1, result2);
	system("pause");
}
*/

#include <iostream>
#include <math.h>
#include <stdio.h>
const double pi=3.14;
using namespace std;

void main()
{
	setlocale(0, "");
	double alpha;
	cout << "Z1=ctg((5/4)pi)+(3/2)alpha)"<<endl;
	cout << "Z2=(1-tg(alpha))/(1+tg(alpha))"<<endl;
	cout << "Enter the alpha value: ";
	cin >> alpha;
	cout << "alpha(rad) = " << alpha << endl;
	double z1 = cos((5./4.)*pi+(3./2.)*alpha)/sin((5./4.)*pi+(3./2.)*alpha);
	cout << "z1= " << z1 << endl;
	double z2 = (1-tan(alpha))/(1+tan(alpha));
	cout << "z2= " << z2 << endl;
	getchar();
	getchar();
}
