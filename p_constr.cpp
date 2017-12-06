#include<iostream>
using namespace std;
class constr{
	int a,b,c;
	public:
		void add();
		//constr(int,int);
	constr()
	{
		a=0;b=11;
	}	

constr(int m,int n)
{
	a=m;b=n;
	//c=a+b;
	
}
};
void constr::add()
{
	c=a+b;
	cout<<"a+b="<<c<<endl;
}
int main()
{
	constr cn;
	constr cn1(24,12);
	cn.add();
	cn1.add();
	return 0;
}
