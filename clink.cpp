//circular Linked list
#include<iostream>
#include<string.h>
using namespace std;
int cnt=0;
class clist
{
 private:
struct cnode
	{
		int data;
		cnode *link;
	}*p;
 public:
 	clist()
 	{
 		p=NULL;
 		//p=p->link;
 	}
  void insert(int);
  void linsert(int);
  void minsert(int,int);
  void bdelete();
  void ldelete();
  void mdelete(int); 
  void show();
 };
	void clist::insert(int el)
	{
		cnode *q,*r,*temp;
		q=new cnode;
		if(p==NULL)
		{
			q->data=el;
			q->link=q;
			p=q;
			cnt++;
			show();
		}
		else
		 {
	    	q->data=el;
	    	temp=p;
		    while(temp->link!=p)
		    {
			r=temp;
			temp=temp->link;
	     	}
		 temp->link=q;
		 q->link=p;
		 p=q;
		 cnt++;
		 show();
       }
	}
	void clist::minsert(int el,int pos)
	{
		int i=0;
		cnode *q,*temp,*next;
		q=new cnode;
		if(p==NULL)
		{
			q->data=el;
			q->link=q;
			p=q;
			cnt++;
			show();
		}
		else
		 {
		 	temp=p;
		 	while(i<pos-1)
			 {
			 	i++;
			 	//next=temp;
			 	if(temp->link!=p)
			 	{
			 		temp=temp->link;
			 		
			 	}
			 	else{
			 	cout<<"Out of bound\n";
			 	return;
			     }
			 } 
			 next=temp->link;
			 q->data=el;
			 temp->link=q;
			 q->link=next;
			 cnt++;
			 show();
		}
	}
	void clist::linsert(int elt)
	{
		cnode *temp,*q,*old;
		q=new cnode;
		if(p==NULL)
		{
			q->link=q;
			p=q;
		    show();	
		}
		else
		{
			temp=p;
			while(temp->link!=p)
			{
				old=temp;
				temp=temp->link;
			}
			old->link=p;
			delete temp;
			show();
		}
	}
	void clist::bdelete()
	{
		cnode *temp,*old;
		if(p==NULL)
		{
			cout<<"there is no element for delete\n";
		show();
		}
		else
		{
			temp=p;
			while(temp->link!=p)
			{
				old=temp;
				temp=temp->link;
			}
			temp=temp->link;
			old=old->link;
			old->link=temp->link;
			p=old;
			delete temp;
			show();
		}
	}
	void clist::ldelete()
	{
		cnode *temp,*q,*del;
		del=new cnode;
          if(p!=NULL)
		  {
			temp=p;
			while(temp->link!=p)
			{
		     	q=temp;
				temp=temp->link;
			}
		    q->link=p;
			delete temp;
			//temp=q;
			cnt--;
			show();
		}
		else
		{
			cout<<"list is already empty\n";
			show();
		
		}
	}
	void clist::mdelete(int pos)
	{
		int i=0;
		cnode *temp,*q,*r;
		if(p==NULL)
		{
			cout<<"List already empty\n";
		}
		else
		{
			temp=p;
			while(i<pos-1)
			{
			  	    i++;
			  	    if(temp->link!=p){
					q=temp;
					temp=temp->link;
				  }
				  else
				  {
				  	cout<<"position does not exit\n";
					  return;
				  }
				q->link=temp->link;
			    delete temp;
			    cnt--;
			    show();
		}
		}
	}
	void clist::show()
	{
		cnode *temp;
		temp=p;
		do
		{
			cout<<temp->data<<"->";
			temp=temp->link;
		}while(temp->link!=p);
		cout<<"\n no of element="<<cnt<<endl;
	}
int main()
{
	clist s;
	char chh;
	int ch,elt,pos;
	do{
	
	       cout<<"\nEnter ur choice \n \
	       1.Insertion at begining \n 2.insertion at last \n 3.insertion from middle \n \
		   4.Deletion at begining\n 5.Delation at last \n 6.Deletion at position\n 7.Show elements\n";
		   cin>>ch;
		   switch(ch)
		   {
		   	case 1:
		   	     cout<<"Enter ur element \t";
		   	     cin>>elt;
		   	     s.insert(elt);
		   	     break;
		    case 2:
		    	 cout<<"Enter ur element\t";
		    	 cin>>elt;
		    	 s.linsert(elt);
		    	 break;
		   	case 3:
		   	     cout<<"Enter ur element and position \t";
		   	     cin>>elt>>pos;
		   	     s.minsert(elt,pos-1);
		       	 break;
		   	
		   	case 4:
		   	      s.bdelete();
		   	      break;
		   	
		   	case 5:
		   	     s.ldelete();
		       	 break;
		   	
		   	case 6:
		   	       cout<<"Enter position of element to be deleted\n";
		   	       cin>>pos;
		   	       s.mdelete(pos-1);
		   	       break; 
		   	case 7:
		   		s.show();
		   		break;
		    default:
		    	  cout<<"Wrong choice\n";
		   }
		   cout<<"do u want to continue....press 'y' \t";
		    cin>>chh;
	}while(chh=='y' || chh=='Y');
}
