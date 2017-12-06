//kunal find maximum sub array
#include <iostream>
using namespace std;
void maxar(int [],int ,int);
int main() {
	// your code goes here
	int ar[10],n,i,j,k,max=0,sum=0,mx,min;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	  }
	  i=0;
	  while(ar[i]<0)
	  {
	  	i++;
	    }
	    while(ar[n-1]<0)
	    {
	     n--;
	    }
	    cout<<"i="<<i<<endl;
	    for(j=i;j<n;j++)
	    {
	     for(k=n-1;k>=j;k--)
	     {
	       sum=sum+ar[k];
	       }
	       if(sum>max)
	       {
	       	mx=n-1;
	       	min=j;
	       	max=sum;
	         }
	         sum=0;
	         }
	         maxar(ar,mx,min);
	         cout<<"\n Max sum is "<<max;
	return 0;
}
void maxar(int arr[],int mx,int mn)
{
 for(int i=mn;i<=mx;i++)
 {
  cout<<arr[i]<<" ";	
  }
 }