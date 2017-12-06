//Single Linked list
#include<iostream>
#include<string.h>
using namespace std;
int cnt=0;
class slist
{
 private:
struct snode
	{
		int data;
		
		snode *link;
	}*p;
 public:
 	slist()
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
	void slist::binsert(int el)
	{
		snode *q;
		q=new snode;
		if(p==NULL)
		{
			q->data=el;
			q->link=NULL;
			p=q;
			cnt++;
			show();
		}
		else
		{
		q->data=el;
		q->link=p;
		p=q;
		cnt++;
		show();
       }
	}
	void slist::linsert(int el)
	{
		snode *q,*temp;
		q=new snode;
		if(p==NULL)
		{
			q->data=el;
			q->link=NULL;
			p=q;
			cnt++;
			show();
			
		}
		else
		{
			temp=p;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			q->data=el;
			q->link=NULL;
			temp->link=q;
			cnt++;
			show();
		}
	}
	void slist::minsert(int el,int pos)
	{
		int i=0;
		snode *q,*temp,*next;
		q=new snode;
		if(p==NULL)
		{
			q->data=el;
			q->link=NULL;
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
			 	if(temp!=NULL){
			 		temp=temp->link;	
			 	}
			 	else{
			 		cout<<"Out of bound\n";
			 		return;
			    }
			} 
			 next=temp->link;
			 q=new snode;
			 q->data=el;
			 temp->link=q;
			 q->link=next;
			 cnt++;
			 show();
		}
	}
	void slist::bdelete()
	{
		snode *temp;
		if(p==NULL)
		{
			cout<<"there is no element for delete\n";
		show();
		}
		else
		{
			temp=p;
			p=temp->link;
			delete temp;
			cnt--;
			show();
		}
	}
	void slist::ldelete()
	{
		snode *temp,*q;
          if(p!=NULL)
		  {
			temp=p;
			while(temp->link!=NULL)
			{
		     	q=temp;
				temp=temp->link;
			}
			
		    q->link=temp->link;
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
	void slist::mdelete(int pos)
	{
		int i=0;
		snode *temp,*q;
		if(p==NULL)
		{
			cout<<"List already empty\n";
		}
		else
		{
			temp=p;
			while((temp->link!=NULL) && (i<=pos-1))
			{
				i++;
					q=temp;
					temp=temp->link;
			}
			if(temp->link==NULL)
				cout<<"position does not exit\n";
				
			else{
			    q->link=temp;
			    delete temp;
			    cnt--;
			show();
		}
		}
	}
	void slist::show()
	{
		snode *temp;
		temp=p;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->link;
		}cout<<"\n no of element="<<cnt<<endl;
	}
int main()
{
	slist s;
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
