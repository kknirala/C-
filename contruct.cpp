#include<iostream>
#include<string.h>
using namespace std;
class b1{
	public:
		b1()
		{
			cout<<"B1\n";
		}
};
class b2{
	public:
		b2()
		{
			cout<<"B2\n";
		}
};
class b3{
	public:
		b3()
		{
			cout<<"B3\n";
		}
};
class d:virtual b1,public b2,virtual b3
{
	public:
	d()
	{
		cout<<"d\n";
	}
};
int main()
{
	d dd;
	return 0;
}
