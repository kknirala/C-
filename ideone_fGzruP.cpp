#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ar[20];
	int a,b,n,k=2,i=0;
	cin>>a>>b>>n;
	ar[0]=a;
	ar[1]=b;
	while(i<n)
	{
		ar[k]=ar[i]*10+a;
		ar[++k]=ar[i]*10+b;
		k++;
		i++;
	}
	for(i=0;i<n;i++)
	{
		cout<<" "<<ar[i];
	}
	cout<<endl;
	return 0;
}