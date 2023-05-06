#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
     node(int data)
	 {
	 	this->data=data;
	 	next=NULL;
		 }	
};
int nodesize(node*head)
{
	int count=0;
	while(head!=NULL)
	{
		count++;
		head=head->next;
	}
	return count;
}
class stack{
	public:
	node*head;
	node*tail;
	stack()
	{
		head=NULL;
		tail=NULL;
	}
	void push(int data)
	{
		node*n1=new node(data);
		if(head==NULL && tail==NULL)
		{
			head=n1;
			tail=n1;
		}
		else
		{
			tail->next=n1;
			tail=n1;
		}
	}
	void pop()
    {
        node*prev=head;
        int i=1;
        while(i<nodesize(head)-1)
        {
            prev=prev->next;
          i++;
        }
      node*temp =tail;
      prev->next=NULL;
      tail=prev;
    }
	
	int getsize()
	{
		if(head==NULL)
		{
			return -1;
		}
		return nodesize(head);
	}
	int gettop()
	{
		if(head==NULL)
		return -1;
		else
		return tail->data;
		
	}
	bool empty()
	{
		if(head==NULL)
		return true;
		else
		return false;	
	}
	void print()
	{
		node*temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		return;
	}
};
int main()
{
	stack s;
		s.push(10);
		s.push(20);
		s.push(30);
		s.push(40);
		s.push(50);
		s.push(60);
			cout<<s.empty()<<endl;
		cout<<s.getsize()<<endl;
		cout<<s.gettop()<<endl;
		s.print();
		cout<<endl;
		s.pop();
		s.pop();
		s.pop();
		s.pop();
		s.print();
		cout<<endl;
		cout<<s.getsize()<<endl;
	    s.pop();
		s.pop();
		cout<<s.empty();
}
