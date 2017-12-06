#include<iostream>
using namespace std;
int gtr(int a,int b,int c)
{
	int d,g;
	d=(a>b)?a:b;
	g=(d>c)?d:c;
	//cout<<"gtr="<<g;
	return g;
}
int main()
{
 int (*ptr)(int,int,int);
 ptr=gtr;
 int i,j,k;
 cout<<"Enter 3 numbers:\t";
 cin>>i>>j>>k;
 cout<<"greater="<<(*ptr)(i,j,k);	
 }
