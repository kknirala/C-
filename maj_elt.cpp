#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n,i;
	int cnt[100]={0};
	cin>>n;
	int ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		cnt[ar[i]]++;
	}
	/*for(i=0;i<100;i++)
    {
	if(cnt[i]>(n/2)){
	cout<<"max repeat="<<i;
    return 0;
	}
   }*/
  cout<<"not found\n";
	return 0;
}
