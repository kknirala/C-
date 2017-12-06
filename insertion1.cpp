//insertion sort
#include<iostream>
using namespace std;
int main()
{
	int ar[]={5,4,8,7,1,3,9,2,6};
	int i,j,a,n=9;
	for(i=1;i<n;i++)
	{
		j=i;
		a=ar[i];
		while((j>0) &&(a<ar[j-1]))
		{
			
			ar[j]=ar[j-1];
			j--;
			
    	}  
		ar[j]=a;	
	    	
	}
	for(i=0;i<n;i++)
	{
		cout<<" "<<ar[i];
	}
}
