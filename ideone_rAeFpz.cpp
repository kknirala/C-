//k k nirala
//a product array puzzle
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ar[10]={2,3,10,6,4,8,1};
	int i,n=7,ml[n],mul=1;
	for(i=0;i<n;i++)
	{
	 mul=mul*ar[i];	
	 }
	 for(i=0;i<n;i++)
	 {
	  ml[i]=mul/ar[i];
	  cout<<" "<<ml[i];
	  }
	  
	return 0;
}