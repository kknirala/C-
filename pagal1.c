#include<iostream>
using namespace std;
#include<string.h>
int main(){
int a = 5,b = 10,c,d=55;
int *p = &a,*q = &b,*x=&d;
c = p-q;
cout<<p<<" "<<q<<" "<<x<<" "<<c;
return 0;
}
