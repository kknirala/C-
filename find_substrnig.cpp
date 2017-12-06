#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char ar[]="kunalkishor";
	char arr[]="nlkh";
	int len1=strlen(arr);
	int i,j=0,cnt=0;
	for(i=0;i<strlen(ar);i++)
	{
		if(ar[i]==arr[j])
		{
		 cnt++;
		 j++;
	     }
	     if(cnt==len1)
		 {
		 	break;
		 }
	 }
		 if(cnt==len1)
		 {
		 	cout<<arr<<" is subsequence of "<<ar;
		 }
		 else
		 {
		 	cout<<arr<<" is not subsequence of "<<ar;
		 }

	return 0;
}
