//string1.cpp
//input: hello o/p: helllo
#include<iostream>
#include<string.h>
using namespace std;
void modify(char *,int,int);
int main()
{
	char ch[20];
	int i,j,l;
	cout<<"Enter string:\t";
	cin>>ch;
	l=strlen(ch);
	for(i=0;i<l;i++)
	{
		if(ch[i]==ch[i+1])
		{
			modify(ch,i+1,l);
			i=i+1;
		}
	}
	cout<<ch;
	return 0;
}
void modify(char *chh, int i, int l)
{
	int ll=l;
	chh[ll+1]='\0';
	while(ll>i)
	{
		chh[ll]=chh[ll-1];
		ll--;
	}
	chh[ll+1]=chh[i];
}

