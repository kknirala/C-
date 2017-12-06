#include<iostream>
using namespace std;
class code{
	int id;
	public:
		code(){
		}
		code(int a){
			id=a;
		}
		code(code &c)
		{
			id=c.id;
		}
		void display(void)
		{
			cout<<id;
		}
};
int main()
{

	code c1(200);
	code c2(c1);
	code c3=c1;
	code c4;c4=c1;
	cout<<"\n id of c1=";c1.display();
    cout<<"\n id of c2=";c2.display();
    cout<<"\n id of c3=";c3.display();
    cout<<"\n id of c4=";c4.display();
 return 0;
}
