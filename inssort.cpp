//insertion sort
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int ar[]={5,4,8,7,1,3,9,2,6};
	int i,j,l=ar[0];
	for(i=1;i<9;i++)
	{
		j=i;
		while(j>=0)
		{
			if(ar[j]>ar[i])
			{
				break;
			}
			else
			{
				ar[j]=ar[j-1];
			}
			j--;
		}
		ar[j]=l;
		l=ar[i];
	}
	cout<<"sorted ";
	for(i=0;i<9;i++)
	cout<<ar[i]<<" ";
	return 0;
}
