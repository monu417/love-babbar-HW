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
  ///////////////////////////insertion at position////////////////////////////////////////
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
// void insertattail(node* &head,node* &tail,int data)
// {
//   if(head==NULL)
//   {
//     node*newnode=new node(data);
//     head=newnode;
//     tail=newnode;
//     return;
//   }
//   else
//   {
//      node*newnode=new node(data);
//      tail->next=newnode;
//      tail=newnode;
//   }
// }
// void insertathead(node* &head,node* &tail,int data)
// {
//   if(head==NULL)
//   {
//     node*newnode=new node(data);
//     head=newnode;
//     tail=newnode;
//     return;
//   }
//   else
//   {
//   node*newnode=new node(data);
//   newnode->next=head;
//   head=newnode;
//   }
// }
void insertatposition(int position,int data,node* &head,node* &tail)
{
  if(position==0)
  {
    node*newnode=new node(data);
    newnode->next=head;
    head=newnode;
    return;
  }
  int i=1;
  node*prev=head;
  while(i<position)
  {
    prev=prev->next;
    i++;
  }
  node*curr=prev->next;
  node*newnode=new node(data);
  newnode->next=curr;
  prev->next=newnode;
  if(curr==NULL)
  {
    tail=newnode;
  }
}
int main() {
node n1(10);
node n2(20);
node n3(30);
node n4(40);
node*head=&n1;
node*tail=&n4;
n1.next=&n2;
n2.next=&n3;
n3.next=&n4;
print(head);
cout<<endl;
// insertathead(head,tail,60);
// insertathead(head,tail,90);
// print(head);
// insertattail(head,tail,70);
// cout<<endl;
// print(head);
// cout<<endl;
// cout<<tail->data<<" ";
insertatposition(0,15,head,tail);
print(head);
cout<<endl;
cout<<endl<<tail->data;
cout<<endl<<head->data<<endl;
insertatposition(5,85,head,tail);
print(head);
cout<<endl;
cout<<endl<<tail->data;
cout<<endl<<head->data<<endl;
insertatposition(2,65,head,tail);
print(head);
cout<<endl<<tail->data;
cout<<endl<<head->data;
  return 0;
}
