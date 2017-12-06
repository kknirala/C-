//program for calculating CGPA.
#include<iostream>
using namespace std;
int main()
{
	int n,c,g;
	float tg=0,tc=0;
	cout<<"Enter no of subject\t";
	cin>>n;
	cout<<"Enter credit & grade ex=10,a=9,b=8,c=7,d=6,p=5\n";
	for(int i=0;i<n;i++)
	{
	 cout<<"enter credit and grade for subject no \t"<<i+1<<"\t";
	 cin>>c>>g;
	 tg=tg+g*c;
	 tc+=c;
	}
	cout<<"your pointer is:"<<tg/tc;
	return 0;
}
