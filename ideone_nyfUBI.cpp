#include <iostream>
#include<string.h>
using namespace std;
char ar[10];
int binry(int,int);
int k=2;
int main() {
	// your code goes here
	int n=2,c;
	//cin>>n;
	c=binry(n,k);
	cout<<c;
	return 0;
}
int binry(int n,int k)
{
	int c=0;
	if(n<1)
	{
		for(int i=0;i<k;i++)
		{
		 if(ar[i]==1 && ar[i+1]==1)
		 return 0;
		}
    return 1;
	}
	else
	{
		ar[n-1]=0;
		c=c+binry(n-1,k);
		ar[n-1]=1;
		c+=binry(n-1,k);
	}
	return c;
}