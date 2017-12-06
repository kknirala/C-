//check who is leader
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int size,i,j,k=0;
    cin>>size;
    int ar[size];
    for(i=0;i<size;i++)
    {
     cin>>ar[i];	
      }
      i=0;
      while(k<size)
      {
       if(ar[k]>ar[k+1])
       {
       	for(j=k+1;j<size;j++)
       	{
       		if(ar[k]<ar[j])
       		{
       			break;
       		}
       	}
       	cout<<"leader is "<<ar[k];
       	}
       	k++;
       }
	return 0;
}