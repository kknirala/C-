#include <iostream>
#include<string.h>
using namespace std;
char repl(char);
int main() {
	// your code goes here
	int l,i;
	//char vo[]={'a','e','i','o','u'};
	char ar[300];
	cin.getline(ar,300);
	l=strlen(ar);
	for(i=0;i<l;i++)
	{
	  ar[i]=repl(ar[i]); 
	  cout<<ar[i];
	 }
	 
	return 0;
}
char repl(char c)
{
	switch(c)
	{
		case 'a':
		    return 'A';
		    break;
	    case 'e':
	         return 'E';
	         break;
	    case 'i':
	         return 'I';
	         break;
	    case 'o':
	         return 'O';
	         break;
	    case 'u':
	         return 'U';
	         break;
	    default:
	       return c;
	}
}