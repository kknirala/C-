#include<iostream>
using namespace std;
class sample{
	private:
		const int i;
		public:
		sample(int j):i(j)
		{
			//i=j;
			cout<<"const i="<<i;
		}
};
int main()
{
	sample s(3);
	return 0;
}
