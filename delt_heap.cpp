#include <iostream>
using namespace std;
//void heap_sort(int [],int);
void heapify(int [],int);
void delt(int [],int);
int lchild(int[],int,int);
int rchild(int[],int,int);
int main() {
	// your code goes here
	int ar[10]={2,3,10,6,4,8,1};
	int i;
	delt(ar,6);
	return 0;
}
void delt(int ar[],int h)
{
 int temp;
 heapify(ar,h);
 for(int i=0;i<=h;i++)
	{
	 cout<<" "<<ar[i];
	 }	
	 cout<<endl;
 temp=ar[0];
 ar[0]=ar[h];
 ar[h]=temp;
 //old[h]=temp;
 h=h-1;
 heapify(ar,h);
 for(int i=0;i<=h;i++)
	{
	 cout<<" "<<ar[i];
	 }	
  }
void heapify(int ar[],int h)
{
	int i,root,temp,left,right;
    for(i=h/2;i>=0;i--)
    {
     left=lchild(ar,i,h);
     right=rchild(ar,i,h);
     cout<<"\n"<<"left="<<left<<" ri8="<<right<<endl;
      if((right!=-1)&&(ar[right]>ar[i]))
	  {	     
   	   temp=ar[right];
   	   ar[right]=ar[i];
   	   ar[i]=temp;
      }
      else if((left!=-1)&&(ar[left]>ar[i]))
      {
       temp=ar[left];
   	   ar[left]=ar[i];
   	   ar[i]=temp;	
      }
    }	
   }
   int lchild(int ar[],int r,int ht)
   {
   	int l;
   	l=2*r+1;
   	if(l<ht)
   	return l;
   	else
   	return -1;
    } 
    int rchild(int ar[],int r,int ht)
   {
   	int rc;
   	rc=2*r+2;
   	if(rc<ht)
   	return rc;
   	else
   	return -1;
    } 
