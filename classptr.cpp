#include<iostream>
using namespace std;
class add{
	private:
		int *ar;
		int n,sum;
		public:
			add(int c)
			{
			n=c;
			ar=new int[n];	
			}
			void ad()
			{
				sum=0;
			cout<<"Enter numbers\n";
			 for(int i=0;i<n;i++)
			 {
			  cin>>ar[i];
			  sum=sum+ar[i];
			 }
			 cout<<"sum="<<sum;	
			 cout<<"\n"<<sizeof(ar);
			}
};
int main()
{
	int n;
	cin>>n;
	add a(n);
	a.ad();
	return 0;
}
