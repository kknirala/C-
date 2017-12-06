#include<iostream>
#include<string.h>
using namespace std;
class add{
	private:
		int a;
	public:
		int b,c;
		int sum()
		{
			//b=x;
			//c=y;
			return b+c;
		}
};
int main()
{
	add ad;
	int add::*p;
	p=&add::b;
	ad.*p=20;
	int add::*q;
	q=&add::c;
	ad.*q=30;
	int (add::*fun)();
	fun=&add::sum;
	cout<<"Sum="<<(ad.*fun)();
	return 0;
}
