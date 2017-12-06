#include<iostream>
#include<string.h>
using namespace std;
void fill(char *,int,int);
void shift(char *,int);
int main()
{
	char ar[30],*ptr;
	int i,j,l;
	cout<<"Enter string\n";
	cin.getline(ar,30);
	i=0;
	while(ar[i]!='\0')
	{
		if(ar[i]=='-')
		{
		l=strlen(ar);
		//i=current index   l=current lenght of array
		 ar[i]=ar[i-1]+1;
		 fill(ar,i,l-1);
		 i=(int)ar[i+1]-(int)ar[i-1]+1;	
		}
		else
		i++;
	} 
	cout<<ar;
}
void fill(char *ch,int in,int len)
{
	char f=ch[in],l=ch[in+1];
	int i=0,dif=l-f,inn=in;
	while(i<dif-1)
	{
	 shift(ch,in);
	 ch[inn+1]=ch[inn]+1;
	 inn++; i++;
	}
}
void shift(char *chh,int inn)
{
	int ll=strlen(chh);
	while(inn<ll-1)
	{
		chh[ll]=chh[ll-1];
		ll--;
	}
}
