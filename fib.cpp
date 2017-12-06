#include <iostream>
using namespace std;
int fib(int);
int main() {
	// your code goes here
	int n,nm;
	cin>>n;
	fib(n);
	//cout<<"nm="<<nm;
	return 0;
}
int fib(int nm)
{
	if(nm<2)
	{
		cout<<" "<<nm;
		return nm;
	}
	else
	{
		return(fib(nm-1)+fib(nm-2));
	}
}

