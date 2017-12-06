#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i;
	char *arr[5];
	char str[30],*ptr,*temp;
	for(i=0;i<5;i++)
	{
		cin>>str;
		int len=strlen(str);
		ptr=new char[len+1];
		strcpy(ptr,str);
		arr[i]=ptr;
	}
	for(i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(strcmp(arr[j],arr[j+1])>0)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nAccording to dictionary \n";
	for(i=0;i<5;i++)
		{
			cout<<arr[i];
			cout<<endl;
		}
return 0;
}
