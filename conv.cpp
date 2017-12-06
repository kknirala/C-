#include<iostream>
using namespace std;
int main()
{
	int a=5;
	float b=2.5;
	char c ='a'; l1:
	cout<<(int)c;
	double r=(a*b);
	double s=(b*c);
	int d=4%2;
	if(d==0) goto l1;
	cout<<"b%2="<<d;
	cout<<"r="<<r<<" \t s="<<s;
	return 0;
}
