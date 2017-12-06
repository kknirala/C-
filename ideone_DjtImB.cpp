#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n,ar[10],min,i,j,flag=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	j=0;
	for(i=1;i<=n;i++)
	{
		if(i!=ar[j])
		{
		while(j<n)
		{
			if(i==ar[j])
			{
				flag=1;
				break;
			}
			j++;
		}
		if(flag==1)
		{
			cout<<"Min="<<min;
			break;
		}
	}
}
	return 0;
}
