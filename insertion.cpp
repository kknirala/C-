#include <iostream>
using namespace std;

int main() {
	// your code goes here
   int ar[9]={5,4,8,7,1,3,9,2,6};
   int i,j,temp,n=9;
   for(i=1;i<n;i++)
   {
   	temp=ar[i];
   	j=i;
   	while((j>0) && (temp<ar[j-1]))
   	{
   	 ar[j]=ar[j-1];
   	 j--;
   	 }
    ar[j]=temp;	 
   }
   for(i=0;i<n;i++)
   {
   	cout<<" "<<ar[i];
   }
	return 0;
}
