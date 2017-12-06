#include <iostream>
#include<string.h>
using namespace std;
int serch(int [],int);
int n=6;
int main() {
	// your code goes here
	int ar[20],num,i;
	
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(serch(ar,num-ar[i]))
		{
			cout<<"num is"<<ar[i]<<" "<<num-ar[i]<<"\n";
			return 0;
		}
		
	}
	return 0;
}
int serch(int ar[],int a)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(ar[i]==a)
		{
			return 1;
		}
		
	}
	return 0;
}