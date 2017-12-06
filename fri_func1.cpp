#include<iostream>
using namespace std;
class matrix{
	int m[3][3];
	public:
		void read(void)
		{
			cout<<"Enter the elements of 3*3 matrix\n";
			int i,j;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<"m["<<i<<"]["<<j<<"]=";
					cin>>m[i][j];
				}cout<<endl;
			}
		}
			void display(void)
			{
				int i,j;
				for(i=0;i<3;i++){
				
				for(j=0;j<3;j++)
				{
					cout<<m[i][j]<<"  ";
				}cout<<endl;
			}
			}
		
		
			friend matrix trans(matrix m);
};
matrix trans(matrix m1)
{
	matrix m2;
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		m2.m[i][j]=m1.m[i][j];
		
	}
	return m2;
}
int main()
{
	matrix mat1,mat2;
	mat1.read();
	cout<<"\n ur entered the following matrix\n";
	mat1.display();
	mat2=trans(mat1);
	cout<<"transposed matrix:\n";
	mat2.display();
	return 0;
}
