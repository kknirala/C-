//double Linked list
#include<iostream>
#include<string.h>
using namespace std;
int cnt=0;
class dlist
{
 private:
struct dnode
	{
		int data;
		dnode *prev,*next;
	}*p;
 public:
 	dlist()
 	{
 		p=NULL;
 		
 	}
  void binsert(int);
  void linsert(int);
  void minsert(int,int);
  void bdelete();
  void ldelete();
  void mdelete(int); 
  void show();
 };
	void dlist::binsert(int el)
	{
		dnode *q;
		q=new dnode;
		if(p==NULL)
		{
			q->data=el;
			q->prev=NULL;
			q->next=NULL;
			p=q;
			cnt++;
			show();
		}
		else{
		q->data=el;
		q->next=p;
		p->prev=q;
		q->prev=NULL;
		p=q;
		cnt++;
		show();
       }
	}
	void dlist::linsert(int el)
	{
		dnode *q,*temp;
		q=new dnode;
		if(p==NULL)
		{
			q->data=el;
			q->prev=NULL;
			q->next=NULL;
			p=q;
			cnt++;
			show();
			
		}
		else
		{
			temp=p;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			q->data=el;
			q->next=NULL;
			q->prev=temp;
			temp->next=q;
			temp=q;
			cnt++;
			show();
		}
	}
	void dlist::minsert(int el,int pos)
	{
		int i=0;
		dnode *q,*temp,*next;
		q=new dnode;
		if(p==NULL)
		{
			q->data=el;
			q->prev=NULL;
			q->next=q;
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
			 	if(temp!=NULL)
			 	{
			 		temp=temp->next;
			 	}
			 	else{
			 	cout<<"Out of bound\n";
			 	return;
			     }
			 } 
			 next=temp->next;
			 q->data=el;
			 temp->next=q;
			 q->prev=temp;
			 q->next=next;
			 cnt++;
			 show();
		}
	}
	void dlist::bdelete()
	{
		dnode *temp;
		if(p==NULL)
		{
			cout<<"there is no element for delete\n";
		show();
		}
		else
		{
			temp=p;
			p=temp->next;
			p->prev=NULL;
			delete temp;
			cnt--;
			show();
		}
	}
	void dlist::ldelete()
	{
		dnode *temp,*q,*del;
		del=new dnode;
          if(p!=NULL)
		  {
			temp=p;
			while(temp->next!=NULL)
			{
		     	q=temp;
				temp=temp->next;
			}
		    q->next=NULL;
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
	void dlist::mdelete(int pos)
	{
		int i=0;
		dnode *temp,*q,*r;
		if(p==NULL)
		{
			cout<<"List already empty\n";
			show();
		}
		else
		{
			temp=p;
			while(i<pos-1)
			{
			  	    i++;
			  	    if(temp->next!=NULL){
					q=temp;
					temp=temp->next;
				  }
				  else
				  {
				  	cout<<"position does not exit\n";
					  return;
				  }
			}
			    
			    q->next=temp->next;
			    delete temp;
			    cnt--;
			    show();
		}
	}
	void dlist::show()
	{
		dnode *temp;
		temp=p;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}cout<<"\n no of element="<<cnt<<endl;
	}
int main()
{
	dlist s;
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
		   	     s.binsert(elt);
		   	     break;
		   	
		   	case 2:
		   	     cout<<"Enter ur element \t";
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
		   	       s.mdelete(pos);
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
