#include<iostream>
#include<string.h>
using namespace std;
void rpt(char []);
int main()
{
	char ar[20];
	int i=0;
	cout<<"enter string\n";
	cin>>ar;
	while(ar[i]!='\0')
	{
		if(ar[i]==ar[i+1])
		{
          rpt(ar);
          i=0;
        }
	     else
	     i++;
    }
    cout<<ar;
	return 0;
}
void rpt(char arr[])
{
	 int i=0,j=1,k=0;
	 while(arr[j]!='\0')
	 {
	 	if(arr[i]==arr[j])
	 	{
	 		j=j+1; i=j;
	 		arr[k]=arr[i];
	 		k++; i++;
	 	}
	 	else
	 	{
	 		arr[k]=arr[i];
	 		i++; k++; j++;
	 	}
	 }
}

