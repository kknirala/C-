//checking of balanced expression
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int top=-1,j=0;
	char ar[]="((abc)(de))";
	char *ar1;
	//ar1=new int[10];
	for(int i=strlen(ar);i>=0;i--)
	{
	 if(ar[i]!='(')
	 {
	 top++;
	 ar1[top]=ar[i];
	 cout<<" "<<ar[top];
      }
	 else if(top>0)
	 while(ar1[top]!=')')
	 top--;
	 cout<<"\n top="<<top;
	}
	cout<<"ar1="<<ar1<<endl;
	if(ar1!='\0')
	{
		cout<<"wrong exp\n";
	}
	return 0;
}
