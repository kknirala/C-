//heap sort
//1.
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
/*
void heap_sort(int ar[],int h)
{
	int i,root,temp;
	for(i=h;i>=0;i--)
	{
	if(h%2==0)
	{
      root=(h-1)/2;
      temp=ar[h];
      ar[h]=ar[root];
      ar[root]=temp;
	  heapify(ar,h);
    }
    else
    {
     root=(h-2)/2;
     temp=ar[h];
     ar[h]=ar[root];
     ar[root]=temp;
	 heapify(ar,h);
	 }
   }
}*/
void heapify(int ar[],int h)
{
 int i,temp,root;
 for(i=h;i>=0;i--)
 {
  	if(h%2==0)
     root=(h-1)/2;
   else
     root=(h-2)/2;
	 if(ar[root]>ar[h])
     {
      temp=ar[h];
      ar[h]=ar[root];
      ar[root]=temp;
      
     }
  }
}
