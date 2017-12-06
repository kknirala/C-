#include <iostream>
using namespace std;
void shift(int [],int,int);
int ar1[10],ar2[25];
int main() {
	// your code goes here
	int i,j,k=0,n,m,temp,c;
	
	cin>>n>>m;
	 
	for(i=0;i<n;i++)
	{
		cin>>ar1[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>ar2[j];
	}
	i=0;
	while(k<(m+n))
	{
		while(ar1[k]>ar2[i])
		{
			i++;
		}
		shift(ar2,(m+n),k);
	}
	for(i=0;i<(m+n);i++)
	{
		cout<<ar2[i];
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
