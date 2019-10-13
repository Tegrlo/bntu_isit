// Лабораторная работа №3. Циклические алгоритмы
// Задание 3. 
// Вариант 11.
// Студента группы 10702119 Старостина Павла Алексеевича

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void main() 
{
	char ch;
	cout<<"this will repeat, untill you write 0";
	do
	{
		cout<<"\nEnter char: ";
		cin >> ch;
		ch &=ch;
		cout<< "Your char now: "<<ch<<endl;
	} while (ch != '0');
 
}