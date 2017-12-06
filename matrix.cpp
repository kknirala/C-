//Array multiplication using contraction
#include<iostream>
#include<conio.h>
using namespace std;
class matrix1;
class matrix2{
	int **p,**mult;
	int d1,d2;
	public:
		matrix2(int x,int y);
		~matrix2();
		void get_elem(int i,int j,int value){
			p[i][j]=value;
		}
		int &put_elem(int i,int j){
			return p[i][j];
		}
		friend void multi(matrix1 m1,matrix2 m2);
};
matrix2::matrix2(int x,int y)
{
	d1=x;
	d2=y;
	p=new int *[d1];
	for(int i=0;i<d1;i++)
	{
		p[i]=new int[d2];
	}
}
matrix2::~matrix2()
{
	delete p;
}
class matrix1{
	int **q,**mult;
	int d1,d2;
	public:
		matrix1(int x,int y);
		~matrix1();
		void get_elem(int i,int j,int value){
			q[i][j]=value;
		}
		int &put_elem(int i,int j){
			return q[i][j];
		}
		friend void multi(matrix1 m1,matrix2 m2);
};
matrix1::matrix1(int x,int y)
{
	d1=x;
	d2=y;
	q=new int *[d1];
	for(int i=0;i<d1;i++)
	{
		q[i]=new int[d2];
	}
}
matrix1::~matrix1()
{
	delete q;
}
void multi(matrix1 m1,matrix2 m2)
{ 
 cout<<"Addition\n";
   int **s;
	int i,j;
	s=new int *[m1.d1];
	for(i=0;i<m1.d1;i++)
	{ 
		s[i]=new int [m1.d2];
		for(j=0;j<m2.d2;j++)
		{
			s[i][j]=m1.q[i][j]+m2.p[i][j];
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int m1,n1,m2,n2;
	cout<<"Enter size of 1st matrix:\t";
	cin>>m1>>n1;
	matrix1 A(m1,n1);
	int i,j,value;
	cout<<"Enter values for matrix1\n";
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			cin>>value;
			A.get_elem(i,j,value);
		}
	}
	cout<<"Enter size of 2nd matrix:\t";
	cin>>m2>>n2;
	matrix2 B(m2,n2);
	//int i,j,value;
	cout<<"Enter values for matrix1\n";
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			cin>>value;
			B.get_elem(i,j,value);
		}
	}
	multi(A,B);
}
