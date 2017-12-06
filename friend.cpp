#include<iostream>
using namespace std;
class female;
class child;
class male{
	int age;
	float income;
	friend void avg(male,female,child);
	public:
		male(int a,float i)
		{
			age=a;
			income=i;
		}
		void show(int,float);
};
class female{
	int age;
	float income;
	friend void avg(male,female,child);
  public:
  	female(int a,float i)
  	{
  		age=a;
  		income=i;
  	}
  //	void show(int,float);
};
class child{
	int age;
	float income;
	friend void avg(male,female,child);
  public:
  	child(int a,float i)
  	{
  		age=a;
  		income=i;
  	}
  //	void show(int,float);
};
void avg(male m,female f,child c)
{
 	float avg_age=float((m.age+f.age+c.age))/3;
    float avg_inc=(m.income+f.income+c.income)/3;
	cout<<"avg_age="<<avg_age<<endl;
	cout<<"avg_income="<<avg_inc<<endl; 
	m.show(m.age+f.age+c.age,m.income+f.income+c.income);	
}
void male::show(int a,float i)
{
	cout<<"A family details:- total age="<<a<<"\t"<<"total inc="<<i<<endl;
}
int main()
{
	int a1,a2,a3;
	float in1,in2,in3;
	cout<<"Enter age and income of male\t";
	cin>>a1>>in1;
	cout<<"Enter age and income of female\t";
	cin>>a2>>in2;
	cout<<"Enter age and income of child\t";
	cin>>a3>>in3;
	male m1(a1,in1);
	female f1(a2,in2);
	child c1(a3,in3);
	avg(m1,f1,c1);
	cout<<"feeling happy\n";
	return 0;
}
