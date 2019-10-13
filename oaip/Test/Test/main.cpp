#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n=0;
	for(int i=99;i<=1000;i++)
		{
		if(i%10==0)
			n++;
		}
	cout<<n;
	getchar();
	getchar();
}