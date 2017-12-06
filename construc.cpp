#include<iostream>
using namespace std;

class A{
	public:
		A()
		{
			cout<<"h\n";
		}
		A(int i)
		{
			cout<<"h1\n";
		}
};
class B:public A{
	public:
	B(int i):A(i)
	{
		cout<<"b const";
	}
};
int main()
{
	B a(4);
	return 0;
}
