#include<iostream>
using namespace std;
class outer{
int a;
 public:
    class inner{
    	int b;
    	public:
    		
    		int c;
    		void pnr(void)
    		{
    			cout<<endl<<"inner::pnr"<<endl;
    			cout<<b<<' '<<c<<endl;
    		}
    		inner()
    		{
    			b=4;
    			c=29;
    		}
    		
    };	
    inner ob1;
    //inner ob4;
    public: 
    inner ob2;
    void second(void)
    {
    	cout<<endl<<"outer::second()"<<endl;
    	cout<<' '<<ob2.c<<endl;
    	cout<<"A="<<a<<endl;
    	ob1.pnr();
    }
    outer()
    {
    	a=23;
    }
};
int main()
{
	outer ob3;
	//inner ob4;
	outer::inner ob5,ob4;
	ob3.second();
	ob3.ob2.pnr();
	ob4.pnr();
	ob5.pnr();
	return 0;
}
