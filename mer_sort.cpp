#include <iostream>
using namespace std;
void merge(int [],int,int);
void merge_sort(int [],int,int,int);
int main() {
	// your code goes here
	int ar[7]={2,3,10,6,4,8,1};
	int s=0,e=6;
	merge(ar,s,e);
	for(int i=0;i<7;i++)
	{
		cout<<" "<<ar[i];
		}
	return 0;
}
void merge(int ar[],int s,int e)
{
	int mid;
 if(s<e)
 {
  	mid=(s+e)/2;
  	merge(ar,s,mid);
  	merge(ar,mid+1,e);
  	merge_sort(ar,s,mid,e);
   }
 }
 void merge_sort(int arr[],int s,int m,int e)
 {
 	int temp[10];
 	 int k=s;
 	int left=s,right=m+1;
 	while((left<=m) && (right<=e))
 	{
 		if(arr[left]<arr[right])
 		{
 			temp[k]=arr[left];
 			k++;
 			left++;
 		}
 		else
 		{
 			temp[k]=arr[right];
 			k++;
 			right++;
 		}
 	}
 	while(left<=m)
 	{
 		temp[k]=arr[left];
 		k++;
 		left++;
 	}
 	while(right<=e)
 	{
 		temp[k]=arr[right];
 		k++;
 		right++;
 	}
 	for(int i=s;i<=e;i++)
 	{
 		arr[i]=temp[i];
 	}
 }
