#include<iostream>
using namespace std;
int findmax(int[],int,int);
int main()
{
	int ar[10]={5,7,9,100,45,31,13,10,61,8};
	int i,max=0,mi,n=10,cmp;
	for(i=0;i<n;i++)
	{
	 if(ar[i]<ar[i+1])
	 {
	  cmp=ar[i+1]-ar[i];
	  if(cmp>max)
	  max=cmp;	
	  }
	  else
	  {
	   mi=findmax(ar,n,i);
	   cmp=ar[mi]-ar[i];
	   if(cmp>max)
	   max=cmp;
	   i=mi;	
	   }
	}
	cout<<"max diff="<<max;
	return 0;
}
int findmax(int ar[],int i,int n)
{
 int j;
 for(j=i;j<n;)
 {
  if(ar[j]>ar[j+1])
  {
   j++;	
   }
   else
   {
   return j;	
   }
  }	
 }
