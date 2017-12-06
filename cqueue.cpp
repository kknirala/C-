//simple queue implementation
#include<iostream>
using namespace std;
#define maxsize 10
class cque{
	private:
	int data[maxsize];
	int f,r;
	public:
	cque()
	{
		f=r=-1;
	}
	void insert(int);
	int delet();
	void display();
};
void cque::insert(int item)
{
	if(f==(r+1)%maxsize)
	{
		cout<<"queue is full\n";
		return;
	}
	else
	{
		r+=1;
		data[r]=item;
	    if(f==-1)
	    f=0;
	}
}
int cque::delet()
{
	int item;
	if(f>r)
	{
	 cout<<"queue is already empty\n";
	 f=r=-1;
	 return 0;
	}
	else
	{
		f+=1;
		item=data[f];
		return item;
	}
}
void cque::display()
{
	int i;
	if(r<0)
	{
		cout<<"queue is empty\n";
		return;
	}
	else
	{
	for(i=f;i<=r;i++)
	{
		cout<<data[i]<<" ";
	}
  }
}
int main()
{
	cque q;
	int n,c,d;
	char ch;
	do{
		cout<<"Enter ur choice 1.insert 2.delete 3.display\n";
		cin>>c;
		switch(c)
		{
			case 1:
				cout<<"enter number\t";
				cin>>n;
				q.insert(n);
				break;
			case 2:
			   d=q.delet();
			   cout<<d<<" has been successfully deleted\n";
			   break;
		   case 3:
		        q.display();
				break;
			default:
		       cout<<"wrong choice";	
		}
		cout<<"Do u want to continue.. press 'y'\t";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
}
