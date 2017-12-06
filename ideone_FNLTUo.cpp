#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cnt=0,n,i,m_index;
	cin>>n;
	int ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	m_index=ar[0];
	for(i=1;i<n;i++)
	{
		if(m_index==ar[i])
		{
			cnt++;
		}
		else
		cnt--;
		if(cnt<0)
		{
			cnt=0;
			m_index=ar[i];
		}
	}
	if(cnt>0)
	{
		cout<<"repeated no:-"<<m_index;
	}
	else
	cout<<"no repeated\n";
	return 0;
}