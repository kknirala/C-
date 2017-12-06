#include<iostream>
using namespace std;
int inc(int);
int main()
{
	int a=4;
	int b;
	b=inc(a);
	cout<<"B="<<b<<endl;
	return 0;
}
int inc(int i)
{
	int j=2;
	int k;
	i++;
	k=++i;
	// if we are not returning any value then by default last statement will return.
}
