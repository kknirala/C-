#include <iostream>
using namespace std;

int main() {
	// your code goes here
int ar[20],n,i,num,f,l,j;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>ar[i];
  }
  cin>>num;
  if(num<0)
  {
  	return 0;
  }
  else
  {
  i=0;
  j=n-1;
  while(i<j)
  {
  	if(ar[i]+ar[j]>num)
  	{
  		j--;
  	}
  	else if(ar[i]+ar[j]<num)
  	{
  		i++;
  	}
  	else
  	{
  		cout<<"ur number is sum of"<<ar[i]<<" "<<ar[j];
  		return 0;
  	}
  }
  }
	return 0;
}
