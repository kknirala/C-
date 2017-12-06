#include<iostream>
using namespace std;
enum Color
{
    // Here are the enumerators
    // These define all the possible values this type can hold
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA
};
int main()
{
	int c;
	cout<<"Enter color\n";
	cin>>c;
	if(c==COLOR_RED)
	{
		cout<<"red\n";
		return 0;
	}
	else
	{
		cout<<"not matched\n";
	}
}
