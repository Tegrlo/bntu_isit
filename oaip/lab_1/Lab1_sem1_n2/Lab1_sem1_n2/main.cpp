/*
������������ ������ �1. �������� ���������
������� 2. ����� ���������
������� 11
�������� ������ 10702119 ���������� ����� �����������
*/

#include <iostream>
#include <math.h>
#include <stdio.h>
const double pi=3.14;
using namespace std;

void main()
{
	double radius, height, volume;
	cout << "cylinder volume (V=(pi)*R^2*H)" << endl;
	cout << "enter the radius(R) of the cylinder: ";
	cin >> radius;
	cout << "enter the height(H) of the cylinder: ";
	cin >> height;
	volume = pi*pow(radius,2)*height;
	cout << "R= " << radius << endl << "H= " << height << endl << "V= " << volume;
	getchar();
	getchar();
}