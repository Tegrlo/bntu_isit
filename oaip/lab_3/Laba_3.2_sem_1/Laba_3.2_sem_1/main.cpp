// Лабораторная работа №3. Циклические алгоритмы
// Задание 1. 
// Вариант 11.
// Студента группы 10702119 Старостина Павла Алексеевича

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;
const int UNKNOWN = FALSE;

void main(){
	setlocale(0, "");
	int i=0,steps,eps;
	double xn,xk,dx,T,mathF,F;
	system("cls");
	cout<<"циклические алгоритмы\n\n";
	cout<<"Составить программу для вычисления функции c помощью разложения в ряд\n\n";
	cout<<"  x+1      infinity       1           ( 1     1      1        )        \n";
	cout<<"ln--- = 2*    E     -------------- = 2(--- + ---- + ---- + ...) |x|>1  \n";
	cout<<"  x-1        n=0    (2n+1)x^(2n+1)    ( x    3x^3   5x^5      )        \n";
	cout<<"Enter xn: ";
	scanf("%lf",&xn);
	cout<<"Enter xk: ";
	scanf("%lf",&xk);
	cout<<"Enter dx: ";
	scanf("%lf",&dx);
	cout<<("Enter precision: ");
	scanf("%d",&eps);
	if ((xn<0 && xk<0)||(xn>=0 && xk>=0)||(xn>xk))//знаки одинаковы, xn>xk --> (|xn|-|xk|)/dx
		steps = (abs(xn)-abs(xk))/abs(dx);
	if ((xn<0 && xk<0)||(xn>=0 && xk>=0)||(xk>xn))//знаки одинаковы, xk>xn --> (|xk|-|xn|)/dx
		steps = (abs(xk)-abs(xn))/abs(dx);
	if ((xn>=0 && xk<=0)||(xn<=0 && xk>=0))//знаки различны --> (|xn|+|xk|)/dx
		steps = (abs(xn)+abs(xk))/abs(dx);
	steps=int(abs(steps));
	//мы нашли кол-во итераций в формате double и перевели в формат int, отбросив числа после запятой
	//остаток нужно именно отбросить, а не окрулить, т.к. при округлении в большую сторону
	//на последней итерации хn станет больше хk
	cout<<"----------------------------------------------\n";
	cout<<"|     x     |     F      |steps|   math F    |\n";
	cout<<"----------------------------------------------\n";	
	for(steps;steps>=0;steps--){
		i=0;
		F=log((xn+1)/(xn-1));
		mathF=0;
		while(i<eps){
			T=(2*(1/((2*i+1)*(pow(xn,(2*i+1))))));
			mathF=mathF+T;
			i++;
		}
		printf("|%8.3f   |%9.6f   |  %3d|%10.f   |\n",xn,F,steps,mathF);
		if(xn>xk)
			xn=xn-dx;
		if(xn<xk)
			xn=xn+dx;
	}
	cout<<"----------------------------------------------\n";
system ("pause");
}	