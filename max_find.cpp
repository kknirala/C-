#include<iostream>
using namespace std;
int findmax(int[],int,int);
int main()
 {
	int ar[10]={7,9,5,6,3,2};
	int i,j,min=ar[0],mi,n=6,diff,maxdiff=0,max;
	for(i=0;i<n;i++)
	{
	 j=i+1;
	 while((ar[j]<ar[j+1]) &&(min<ar[j]))
	 {
	  j++;
	  }
	   max=ar[j];
	   diff=max-min;
	   min=ar[i+1];
	   if(maxdiff<diff)
	   {
	   	maxdiff=diff;
	    }
	   }
	cout<<"max diff="<<maxdiff;
	return 0;
 }
