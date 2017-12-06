//reverse a string..
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char temp;
	char ar[100];
	cin.getline(ar,100);
	int l=strlen(ar);
	int s=l-1;
	for(int i=0;i<(l/2)+1;i++)
	{
		temp=ar[i];
		ar[i]=ar[s];
		ar[s]=temp;
		s--;
	}
	for(int i=0;i<strlen(ar);i++)
	cout<<ar[i];
	// your code goes here
	return 0;
}