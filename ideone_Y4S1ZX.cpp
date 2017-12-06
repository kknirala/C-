//binary to hexa
#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
char convt(int []);
int main() {
	// your code goes here
	long int num;
	int c=0,i=0,j=0,ar[10],r;
	char cn[10],*arr;
	cin>>num;
	while(num>0)
	{
		r=num%10;
		ar[c]=r;
		
		if(c==3)
		{
			cn[i]=convt(ar);
			c=0;
			i++;

		}
		c++;
		num=num/10;
	}
	arr=cn;
	//j=0;
	while(*arr)
	{
		cout<<*arr;
		arr++;
	}
	return 0;
}
char convt(int ch[])
{ 
	char c;
 	int i=3,s=0;
 	while(i>=0)
 	{
 		s=s+ch[i]*pow(2,i);
 		i--;
 	}
 	switch(s)
	{
		case 10:
		   c= 'A';
		   break;
		case 11:
		   c= 'B';
		   break;
		case 12:
		   c= 'C';
		   break;
	    case 13:
		   c= 'D';
		   break;
		case 14:
		   c= 'E';
		   break;
		 case 15:
		   c= 'F';
		   break;
		default:
		  c= s+'0';
 }
 return c;
}