//VIrtual base class
#include<iostream>
#include<string.h>
using namespace std;
class gp{

	protected:
		int x;
		public:
	gp()
	{
		x=-1;
	}
	gp(int i){
		x=i;
	}
	int getgp()
	{
		return x;
	}
	void show(int i)
	{
		cout<<" i="<<i<<endl;
	}
};
class p1: public virtual gp{
	protected:
	int y;
	public:
	p1(int i,int j):gp(i){
		y=j;
	}
	int getp1()
	{
		return y;
	}
	void show()
	{
	cout<<"x="<<x<<getp1();
}
};
class p2:public virtual gp{
    protected:
	int z;
	public:
		p2(int i,int j):gp(i){
			z=j;
		}
		int getp2()
		{
			return z;
		}
		void show(){
		cout<<"x="<<x<<"  "<<getp2();
	}
};
class gs:public p1,public p2{
	int zz;
	public:
		gs(int i,int j,int k):gp(i),p1(i,j),p2(i,j){
			zz=k;
		}
		int getgs()
		{
			return zz;
		}
		void show(){
		cout<<"X="<<x<<"gp="<<getgp()<<"p="<<getp2()<<"gs="<<getgs()<<endl;
    }
};
int main()
{
	gs g(5,7,2);
	cout<<"hello";
	g.show();
	return 0;
}
