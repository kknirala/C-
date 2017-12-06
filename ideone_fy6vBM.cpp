#include <iostream>
#include<string.h>
using namespace std;
char *rem(char *);
int main() {
	// your code goes here
	char *c,ar[60];
	cin>>ar;
	c=rem(ar);
	while(*c)
	{
		if(*c==' ')
		{
			c++;
		}
		else
		{
		
		cout<<*c;
		c++;
		}
	}
	return 0;
}
char *rem(char *ch)
{ 
	char *ch2;
	ch2=ch;
	//cout<<*ch;
	while(*ch)#include <iostream>
#include<string.h>
using namespace std;
char *rem(char *);
int main() {
	// your code goes here
	char *c,ar[60];
	cin>>ar;
	c=rem(ar);
	while(*c)
	{
		if(*c==' ')
		{
			c++;
		}
		else
		{
		
		cout<<*c;
		c++;
		}
	}
	return 0;
}
char *rem(char *ch)
{ 
	char *ch2;
	ch2=ch;
	//cout<<*ch;
	while(*ch)
	{
		if(((*ch>=97)&&(*ch<=123)) ||((*ch>=65)&&(*ch<=91)))
		{
		//	*ch=' ';
			//ch++;
			
		}
		else
		{
			*ch=' ';
		 //ch++;
		}
		//cout<<*ch;
		ch++;
	}
	return ch2;
}
	{
		if(((*ch>=97)&&(*ch<=123)) ||((*ch>=65)&&(*ch<=91)))
		{
		//	*ch=' ';
			//ch++;
			
		}
		else
		{
			*ch=' ';
		 //ch++;
		}
		//cout<<*ch;
		ch++;
	}
	return ch2;
}