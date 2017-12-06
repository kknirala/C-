#include <iostream>
using namespace std;
void exct(char *,char *);
//char ch1[20],ch2[20];
int main() {
	int i=0;
	// your code goes here
     char ch1[20],ch2[20];
     cin>>ch1;
     cin>>ch2;
     exct(ch1,ch2);
     while(ch1[i]!='\0')
     {
     	if(ch1[i]==' ')
     	i++;
     	else
     	{
     		cout<<ch1[i];
     		i++;
     	}
     }
   //  cout<<ch1;
	return 0;
}
void exct(char *str1,char *str2)
{
	char *a,*b;
	
	b=str2;
	while(*b)
	{
		a=str1;
		while(*a)
		{
			if(*b==*a)
			{
				*a=' ';
				a++;
			}
			else
				a++;
		}
	   b++;
	   //cout<<*str2;
	}
	cout<<endl;
	
}