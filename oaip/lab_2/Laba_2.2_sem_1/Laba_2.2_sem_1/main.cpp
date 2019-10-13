// Лабораторная работа №2. Разветвляющиеся алгоритмы
// Задание 2. 
// Вариант 11.
// Студента группы 10702119 Старостина Павла Алексеевича

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
	int *numbers;
	int testNumbers[5] = {-5,0,19,-3,11};
	bool isHaveGroup;
	int userInput,size;
	cout<<"Group A: odd, positive numbers\n";
	cout<<"Group B: bigger then -5, negative numbers\n";
	cout<<"Group C: bigger then 10, positive numbers\n";
	cout<<"Group D: other numbers\n";
	cout<<"\nEnter how much numbers you want to sort(Enter 0, if you want to use test numbers(-5,0,19,-3,11)): ";
	cin >> userInput;
	if (userInput == 0)
	{
		size=5;
		numbers = (int*) malloc (sizeof(int)*size);
		numbers = testNumbers;
	}
	else
	{
		size = userInput;
		numbers = (int*) malloc (sizeof(int)*size);
		for (int i=0;i<size;i++)
		{
			cout<<"Enter number " << i+1 << ": ";
			cin >> numbers[i];
		}
	}
	for (int i=0;i<size;i++)
	{
		isHaveGroup = FALSE;
		if (numbers[i]%2 == 1 && numbers[i]>0)
		{
			cout << "The number " << numbers[i] << " refers to group A\n";
			isHaveGroup = TRUE;
		}
		if (numbers[i]>-5 && numbers[i]<0)
		{
			cout << "The number " << numbers[i] << " refers to group B\n";
			isHaveGroup = TRUE;
		}
		if (numbers[i]>10)
		{
			cout << "The number " << numbers[i] << " refers to group C\n";
			isHaveGroup = TRUE;
		}
		if (isHaveGroup == FALSE)
			cout << "The number " << numbers[i] << " refers to group D\n";
	}
	system("pause");
}