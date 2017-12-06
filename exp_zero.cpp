#include<iostream>
#include<string.h>
using namespace std;
int devide(int,int);
int main()
{
	int a,b,c;
	cout<<"Enter 2 num\t";
	cin>>a>>b;
	try
	{
		c=devide(a,b);
		cout<<"c="<<c;
		cout<<endl;
	}
	catch(const char* msg)
	{
		cout<<"msg="<<msg;
	}
	return 0;
	
}
int devide(int a,int b)
{
	if(b==0)
	{
		throw "de-numinator can not be Zero\n";
	}
	return (a/b);
}
