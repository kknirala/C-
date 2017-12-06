#include<iostream>
using namespace std;
void afunc(long double);
void afunc(double);
int main()
{
	afunc(15.2L);
	return 0;
}
void afunc(long double b)
{
	b=b+4;
	cout<<"float:-"<<b;
}
void afunc(double a)
{
	a=a+2;
	cout<<"double:-"<<a;
}
