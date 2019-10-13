// Лабораторная работа №2. Разветвляющиеся алгоритмы
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
	double value_F,x,z;
	int value_f;
	bool isAllRight=UNKNOWN;
	system("cls");
	cout<<"линейные алгоритмы\n\n";
	cout<<"    (sin(4f(x)+3z|f(x)|), -1<z<x\n";
	cout<<"j = {cos(2f(x)+5z|f(x)|), z>x   \n";
	cout<<"    ((f(x)+z)^2,        , z=x   \n";
	cout<<"Enter x: ";
	cin >>x;
	cout<<"Enter z: ";
	cin >>z;
	while(isAllRight == FALSE){
		isAllRight = TRUE;
		cout<<"Choose value for f(x)\n1 -- f(x)=exp(x)\n2 -- f(x)=x^2\n";
		cin >>value_f;
		if (value_f == 1)
			value_F = exp(x);
		else{
			if (value_f == 2)
				value_F = pow(x,2);
			else
				(isAllRight = FALSE);
		}
		if(isAllRight == TRUE){
			cout<<"\nx=", cout<<x;
			cout<<"\nz=", cout<<z;
			cout<<"\nf(x)=", cout<<value_F;
			cout<<"\nj=";
			if(-1<z<x)
				cout<<sin(4*value_F+3*z*fabs(value_F))<<endl;
			if(z>x)
				cout<<cos(2*value_F+5*z*fabs(value_F))<<endl;
			if(z=x)
				cout<<pow((value_F+z),2)<<endl;
		}
		else{
			system("cls");
			cout<<"ERROR: You Enter: ";
			cout<<value_f;
			cout<<"\nEnter only 1, or 2, when choose value for f(x)\n";
			cout<<"x=", cout<<x, cout<<"\nz=", cout<<z, cout<<endl;
		}
	}
cout<<"\n";
system ("pause");
}	