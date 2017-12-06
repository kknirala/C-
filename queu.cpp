#include<iostream>
using namespace std;
#define maxsize 8
class que{
	  private:
	
	int data[maxsize];
	int front,rear;
    public:
	void insert(int);
	int delet();
	void disp();
	que()
	{
		front=rear=-1;
	}
};
void que::insert(int num)
{
 if(rear>maxsize)
 {
 	cout<<"Queue is full\n";
 	exit(0);
 }	
 else
 {
 	rear++;
 	data[rear]=num;
 }
 if(front==-1)
 {
 	front=0;
 }
  }
  int que::delet()
  {
  	int temp;
  	if(front>rear || front<0)
  	{
  		cout<<"Queue already Empty\n";
  	}
  	else
  	{
  		temp=data[front];
  		front++;
  		return temp;
  	}
  	if(front==rear)
  	{
  		front=0;
  		rear=-1;
  	}
  }
  void que::disp()
  {
  	int temp=front;
  	if(rear<0)
  	{
  		cout<<"Queue is Empty\n";
  	}
  	else
  	{
  		while(temp<=rear)
  		{
  			cout<<data[temp]<<" ";
  			temp++;
  		}
  	}
  }
  int main()
  {
  	que q;
  	char ch;
  	int c,n;
  	do{
  		cout<<"Enter your choice\n";
  	    cout<<" 1.Insert \t 2.Delete \t 3.Display\n";
  	    cin>>c;
  	    switch(c)
  	    {
  	    	case 1:
  	    		cout<<"Enter element\n";
  	    		cin>>n;
  	    		q.insert(n);
  	    		break;
  	    	case 2:
  	    		cout<<"Deleted item\t"<<q.delet();
  	    		break;
  	    	case 3:
  	    		q.disp();
  	    		break;
  	    	default:
  	    		cout<<"Wrong choice\n";
  	    		
  	    }
  	    cout<<"\nDo you want to continue.. press y \n";
	  	cin>>ch;
  	}while(ch=='y' || ch=='Y');
  }
