// Лабораторная работа №3. Циклические алгоритмы
// Задание 1. 
// Вариант 11.
// Студента группы 10702119 Старостина Павла Алексеевича

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <iostream>
using namespace std;
const int UNKNOWN = FALSE;

void main(){
	setlocale(0, "");
	int steps;
	double a,b,c,x1,x2,dx,F;
	system("cls");
	cout<<"циклические алгоритмы\n\n";
	cout<<"calculate and display in the form of a table the function F values from x1 to x2 in dx steps\n\n";
	cout<<"    |ax^2+b      ,x<0,b!=0       \n";
	cout<<"F = {(x-a)/(x-c) ,x>0,b=0        \n";
	cout<<"    |x/c         ,all other cases\n";
	cout<<"a,b,c -- real numbers(R)\n";
	cout<<"Enter a: ";
	cin >>a;
	cout<<"Enter b: ";
	cin >>b;
	cout<<"Enter c: ";
	cin >>c;
	cout<<"Enter x1: ";
	cin >>x1;
	cout<<"Enter x2: ";
	cin >>x2;
	cout<<"Enter dx: ";
	cin >>dx;
	if ((x1<0 && x2<0)||(x1>=0 && x2>=0)||(x1>x2))//знаки одинаковы, x1>x2 --> (|x1|-|x2|)/dx
		steps = (abs(x1)-abs(x2))/abs(dx);
	if ((x1<0 && x2<0)||(x1>=0 && x2>=0)||(x2>x1))//знаки одинаковы, x2>x1 --> (|x2|-|x1|)/dx
		steps = (abs(x2)-abs(x1))/abs(dx);
	if ((x1>=0 && x2<=0)||(x1<=0 && x2>=0))//знаки различны --> (|x1|+|x2|)/dx
		steps = (abs(x1)+abs(x2))/abs(dx);
	steps=int(abs(steps));
	//мы нашли кол-во итераций в формате double и перевели в формат int, отбросив числа после запятой
	//остаток нужно именно отбросить, а не окрулить, т.к. при округлении в большую сторону
	//на последней итерации х1 станет больше х2
	cout<<"-------------------------\n";
	cout<<"|     x     |     F     |\n";
	cout<<"-------------------------\n";
	for(steps;steps>=0;steps--){
		if(x1<0 && b!=0)
			F=a*pow(x1,2)+b;
		if(x1>0 && b==0)
			F=(x1-a)/(x1-c);
		if(!(x1<0 && b!=0)||!(x1>0 && b==0))
			F=x1/c;
		printf("|%8.3f   |%8.3f   |\n",x1,F);
	if(x1>x2)
		x1=x1-dx;
	if(x2>x1)
		x1=x1+dx;
	}
	cout<<"-------------------------";
cout<<"\n";
system ("pause");
}	