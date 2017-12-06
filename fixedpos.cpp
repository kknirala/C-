#include<iostream>
using namespace std;
int main()
{
	int ar[]={1,2,7,9,4};
	int i,f=0;
	for(i=0;i<5;i++)
	{
		if(i==ar[i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<"pos="<<i;
		else
		cout<<"pos="<<-1;
	return 0;
}
