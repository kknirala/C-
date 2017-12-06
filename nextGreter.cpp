#include<iostream>
using namespace std;
int main()
{
	int ar[7]={4,25,2,10,5,6,7};
	int gtr[7]={-1};
	int i,j,temp;
	cout<<"number\tnext greater number\n";
	for(i=0;i<7;i++)
	{
		temp=ar[i];
		j=0;
		while(j<7)
		{
			if(temp<ar[j])
			{
				if(gtr[i]!=-1 && gtr[i]>ar[j])
				{
				 gtr[i]=ar[j];
				}
			}
			j++;
		}
		cout<<ar[i]<<"\t"<<gtr[i]<<endl;
	}
	/*cout<<"number\tnext greater number\n";
	for(i=0;i<7;i++)
	{
	 cout<<ar[i]<<"\t"<<gtr[i]<<endl;	
	 }*/
	return 0;
}

