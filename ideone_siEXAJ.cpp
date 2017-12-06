#include <iostream>
using namespace std;
void shift(int [],int);
int ar[20];
int main() {
	// your code goes here
	int size,i,s,temp,j=0;
	cin>>size;
	for(i=0;i<size;i++)
	{
      cin>>ar[i];  
	   }
	   cin>>s;
	   while(j<s)
	   {
	     temp=ar[size-1];
	     shift(ar,size-1);
	     ar[0]=temp;
	     j++;
	    }
	    for(i=0;i<size;i++)
	    {
	    	cout<<" "<<ar[i];
	    }
	return 0;
}
void shift(int arr[],int size)
{
	int i;
	for(i=size;i>=1;i--)
	{
		arr[i]=arr[i-1];
	}
}