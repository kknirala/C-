#include<iostream>
using namespace std;
void binaryy(int);
char A[10];
int main()
{
	int i;
	i=3;
	binaryy(i);
	return 0;
}
void binaryy(int n)
{
	 // cout<<"n="<<n<<" ";
	if(n<1)
	{
		cout<<A<<endl;
	}
	else
	{
		A[n-1]='0';
		cout<<"n1="<<n<<" ";
		binaryy(n-1);
		cout<<"n2="<<n<<" ";
		A[n-1]='1';
		cout<<"n3="<<n<<" ";
		binaryy(n-1);
		cout<<"n4="<<n<<" ";
	}
}
