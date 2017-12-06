#include<iostream>
#include<exception>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	try
	{
	 if(b==0)
	 throw "divide by zero\n";
	 c=a/b;
	 cout<<"a/b="<<c;
	}
	catch(const char* msg)
	{
	//	throw;
		cout<<"error:-"<<msg<<endl;
	}
	return 0;
}
