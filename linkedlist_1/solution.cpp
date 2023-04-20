#include <iostream>
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
void print(node* &head)
{
  node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
void insertattail(node* &head,node* &tail,int data)
{
  if(head==NULL)
  {
    node*newnode=new node(data);
    head=newnode;
    tail=newnode;
  }
  else
  {
     node*newnode=new node(data);
     tail->next=newnode;
     tail=newnode;
  }
}
void insertathead(node* &head,node* &tail,int data)
{
  if(head==NULL)
  {
    node*newnode=new node(data);
    head=newnode;
    tail=newnode;
  }
  else
  {
  node*newnode=new node(data);
  newnode->next=head;
  head=newnode;
  }
}
int main() {
node n1(10);
node n2(20);
node*head=&n1;
node*tail=&n2;
n1.next=&n2;
print(head);
cout<<endl;
insertathead(head,tail,60);
insertathead(head,tail,90);
print(head);
insertattail(head,tail,70);
cout<<endl;
print(head);
cout<<endl;
cout<<tail->data<<" ";
  return 0;
}
