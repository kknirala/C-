#include <iostream>
using namespace std;
void shift(int [],int,int);
int main() {
	// your code goes here
	int i,j,n,m,temp;
	int ar1[10],ar2[25];
	cin>>n>>m;
	 
	for(i=0;i<n;i++)
	{
		cin>>ar1[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>ar2[j];
	}
	for(i=0;i<m+n;i++)
	{
		if(ar1[i]<ar2[i])
		{
			temp=ar1[i];
			shift(ar2,m+n,i);
			ar2[i]=temp;
		}
	}
	return 0;
}
void shift(int ar2[],int s,int k)
 {
 int i;
 for(i=s;i>k;i--)
 {
 	ar2[i+1]=ar2[i];
   }
 }
