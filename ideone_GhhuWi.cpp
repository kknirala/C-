//program to convert decimal to any base. number
#include <iostream>
using namespace std;
void convert(int ,int);
int main() {
	// your code goes here
	int num,c;
	//cout<<"Choose ur choice 1.binary 2.octal 3.hexa\n";
	cin>>c;
	//cout<<"enter ur number\t";
	cin>>num;
	convert(num,c);
	return 0;
}
void convert(int n,int ch)
{
	char *arr1;
	int i,r,l;
	 int ar[20];
	char ar1[20];
	switch(ch)
	{
		case 1:
            i=0;
	     	while(n>0)
		    {
			r=n%2;
			n=n/2;
		    ar[i]=r;
		   // cout<<ar[i];
		    i++;
		}
		//cout<<"i="<<i;
    	l=i-1;
		while(l>=0)
		{
			cout<<ar[l];
			l--;
		}
		break;
	case 2:
	    i=0;
		while(n>0)
		{
			r=n%8;
			n=n/8;
		    ar[i]=r;
		    i++;
		}
		l=i-1;
		while(l>=0)
		{
			cout<<ar[l];
			l--;
		}
		break;
	  case 3:
	     i=0;
		while(n>0)
		{
			r=n%16;
			 switch(r)
			 {
			 	case 10:
			 	     ar1[i]='A';
			 	     break;
			 	case 11:
			 	     ar1[i]='B';
			 	     break;
			 	case 12:
			 	     ar1[i]='C';
			 	     break;
			    case 13:
			 	     ar1[i]='D';
			 	     break;
			 	case 14:
			 	     ar1[i]='E';
			 	     break;
			 	case 15:
			 	     ar1[i]='F';
			 	     break;
			 	default:
			 	    ar1[i]=r+'0';
			 	
			 }
			  n=n/16;
		      i++;
		}
		l=i-1;
	//arr1=ar1;
		while(l>=0)
		{
			cout<<ar1[l];
			l--;
		}
		break;
	}
}
