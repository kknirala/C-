#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *na[5],*str;
	int i;
	//char str[20];
	for(i=0;i<5;i++)
	{
	cout<<"enter name\n";
	cin>>str;
	na[i]=str;
     }
	//str=NULL;
	
	for(i=0;i<5;i++)
	{
	 cout<<na[i];
 }  
	return 0;
}
