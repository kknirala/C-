//find highest number between 2 given integer number
#include<iostream>
using namespace std;
int high(int a,int b)
{
	return a>b?a:b;
}
int max(int i,int j,int(ptr)(int,int))
{
  int g=(*ptr)(i,j);
  return g;
}
int main()
{
	int a,b;
	cout<<"Enter 2 numbers\n";
	cin>>a>>b;
	int (*ptr)(int,int);
	ptr=high;
	cout<<"max="<<max(a,b,ptr);
	return 0;
}
