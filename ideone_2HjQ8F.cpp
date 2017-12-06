//k k nirala
//Print the elements of an array in the
//decreasing frequency if 2 numbers have same frequency then print the one which came 1st
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int ar[20],un[15],cn[15]={0},i,j,n,k,l,flag;
	cin>>n;
	for(i=0;i<n;i++)
	{
	 cin>>ar[i];	
	 }
	 j=0;
	un[j]=ar[0];
	 for(i=1;i<n;i++)
	 {
	  	if(ar[i]==un[j])
	  	{
	  	 cn[j]=cn[j]+1;
	  	 }
	  	 else
	  	 {
	  	  flag=0;
	  	  for(k=0;k<=j;k++)
	  	  {
	  	   if(ar[i]==un[k])
	  	   {
	  	   	++cn[j];
	  	   	flag=1;
	  	   	break;
	  	    }
	  	   }
	  	   if(flag==0)
	  	  {
	  	  	j++;
	  	  	un[j]=ar[i];
	  	  }
	  	  }
	   }
	  for(i=0;i<=j;i++)
	  {
	   cout<<un[i]<<" "<<cn[i]<<endl;
	    }
	return 0;
}