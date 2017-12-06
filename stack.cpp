#include<iostream>
using namespace std;
struct stck{
	int num;
	 stck *next;
	
}*start=NULL;
class stack{
	public:
		void push(int);
		int pop();
		void disp();
};
void stack::push(int n)
{
stck *node;
node =new stck;
node->num=n;
node->next=start;
start=node;	
}
int stack::pop()
{
	stck *temp;
	temp=start;
	if(start==NULL)
	{
		cout<<"Stack is already empty\n";
		return 0;
	}
	else
	{
	 	start=start->next;
	 	delete temp;
	}
	return temp->num;	
}
void stack::disp()
{
	stck *temp;
	temp=start;
	while(temp->next!=NULL)
	{
	 cout<<endl<<temp->num;
	 temp=temp->next;	
	}
	cout<<temp->num;
}
int main()
{
	stack s;
	char ch;
	int c,n;
	do{
		cout<<"Enter choice\n 1.PUSH \n 2.POP \n 3.Display\n";
		cin>>c;
		switch(c)
		{
			case 1:
				cout<<"Enter item\n";
				cin>>n;
				s.push(n);
				break;
			case 2:
				cout<<"deleted item is"<<s.pop();
				break;
			case 3:
				s.disp();
			    break;
			default:
				cout<<"Wrong choice\n";
			
		}
		cout<<"Do u want to continue..\t";
		cin>>ch;
		}while((ch=='y') || (ch=='Y'));
	
	return 0;
}
