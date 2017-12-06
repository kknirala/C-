#include<iostream>
using namespace std;
int fact(int);
// int f=1;
int main()
{
	int n,f;
	cin>>n;
	f=fact(n);
	cout<<"factorial of "<<n<<"="<<f;
	return 0;
}
int fact(int n)
{
	
	if(n<=1)
	{
		return 1;
	}
	else
	{
	  return n*fact(n-1);
	}
}
