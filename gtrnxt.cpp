#include<iostream>
using namespace std;
int main()
{
	int ar[8]={4,25,2,10,5,6,7};
	int gtr[7]={-1};
	int i,j,temp,flag;
	cout<<"number\tnext greater number\n";
	for(i=0;i<7;i++)
	{
		flag=0;
		temp=ar[i];
		j=0;
		while(j<7)
		{
			if(temp<ar[j])
			{
				if(gtr[i]==-1)
				{
				gtr[i]=ar[j];
			    }
				else if(gtr[i]>ar[j])
				{
				 gtr[i]=ar[j];
				}
				flag=1;
			}
			else
			{
				if(flag==0)
				gtr[i]=-1;
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

