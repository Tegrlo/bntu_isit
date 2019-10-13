// Лабораторная работа №2. Разветвляющиеся алгоритмы
// Задание 3.
// Вариант 11.
// Студента группы 10702119 Старостина Павла Алексеевича

#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int userInput;
	setlocale(0, "");
	double marks[13] = {9.1,8.9,8.5,8.5,7.4,7.1,6.9,6.8,6.5,5.8,5.7,4.6,4.3};
	double searchParam = 8.5;
	string students[13] = {"Григорьев  ","Протасова  ","Арефьев    ","Стольмакова","прилукин   ","Авакян     ","Дорофеева  ","Жбан       ","Ступица    ","Шлапакова  ","Шульженко  ","Стротонов  ","Хрущев     "};
	cout<<"0 -- использовать тестовые данные\n1 -- ввести оценки учеников в ручную\nВведите число: ";
	cin >> userInput;
	switch(userInput)
	{
	case 0:
		cout<<"вы выбрали тестовые данные";
		for(int i=0;i<13;i++)
		{
			cout<< "\nСредний балл учащегося(ейся) " << students[i] << ": " << marks[i];	
		}
		cout<< "\nпоиск учащихся, имеющих средний балл не менее :" << searchParam<<endl;
		break;
	case 1:
		for(int i=0;i<13;i++)
		{
			cout<< "Введите средний балл учащегося(йся) " << students[i] <<": ";
			cin >> marks[i];		
		}
		cout<< "поиск учащихся, имеющих средний балл не менее заданного\n";
		cout<< "Введите средний балл:";
		cin>>  searchParam;
		break;
	default:
		cout<<"Ошибка: неправильно введены данные!\n";
		break;
	}
	if (userInput==0||userInput==1)
	{
		for (int i=0;i<13;i++)
		{
			if (marks[i]>=searchParam)
			{
				cout<<students[i] << " -- " << marks[i] << endl;
			}
		}
	}
	system("pause");
}