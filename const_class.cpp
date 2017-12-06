//we can not declare constant class
#include<iostream>
using namespace std;
const class cns{
	public:
		cns()
		{
			cout<<"const class\n";
		}
};
int main()
{
	cns c;
	return 0;
}
