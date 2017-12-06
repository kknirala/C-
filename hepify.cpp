#include <iostream>
using namespace std;
//void heap_sort(int [],int);
void heapify(int [],int);
int main() {
	// your code goes here
	int ar[10]={2,3,10,6,4,8,1};
	int i;
	heapify(ar,6);
	for(i=0;i<7;i++)
	{
	 cout<<" "<<ar[i];
	 }
	return 0;
}
void heapify(int ar[],int h)
{
	int i,root,temp;
 for(i=h;i>=0;i--)
 {
   if(i%2==0)
   root=(i-1)/2;
   else
   root=(i-2)/2;
   if(ar[i]<ar[root])
   {
   	temp=ar[i];
   	ar[i]=ar[root];
   	ar[root]=temp;
   }
   }	
  }
