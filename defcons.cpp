#include<iostream>
#include<string.h>
using namespace std;
class Student3{  
int id;  
char name[20];  
  public:
void display(){cout<<id<< " "<<name;}  
};
 int main(){  
Student3 s1;  
Student3 s2;  
s1.display();  
s2.display();  
return 0;
}  
