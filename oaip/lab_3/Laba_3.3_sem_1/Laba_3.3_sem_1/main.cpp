// ������������ ������ �3. ����������� ���������
// ������� 3. 
// ������� 11.
// �������� ������ 10702119 ���������� ����� �����������

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