// ������������ ������ �2. ��������������� ���������
// ������� 3.
// ������� 11.
// �������� ������ 10702119 ���������� ����� �����������

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
	string students[13] = {"���������  ","���������  ","�������    ","�����������","��������   ","������     ","���������  ","����       ","�������    ","���������  ","���������  ","���������  ","������     "};
	cout<<"0 -- ������������ �������� ������\n1 -- ������ ������ �������� � ������\n������� �����: ";
	cin >> userInput;
	switch(userInput)
	{
	case 0:
		cout<<"�� ������� �������� ������";
		for(int i=0;i<13;i++)
		{
			cout<< "\n������� ���� ���������(����) " << students[i] << ": " << marks[i];	
		}
		cout<< "\n����� ��������, ������� ������� ���� �� ����� :" << searchParam<<endl;
		break;
	case 1:
		for(int i=0;i<13;i++)
		{
			cout<< "������� ������� ���� ���������(���) " << students[i] <<": ";
			cin >> marks[i];		
		}
		cout<< "����� ��������, ������� ������� ���� �� ����� ���������\n";
		cout<< "������� ������� ����:";
		cin>>  searchParam;
		break;
	default:
		cout<<"������: ����������� ������� ������!\n";
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