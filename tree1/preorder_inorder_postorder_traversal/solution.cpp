#include <iostream>
#include<queue>
using namespace std;
class treenode{
           public:
          int data;
          treenode*left;
          treenode*right;

          treenode(int data)
          {
             this->data=data;
             left=NULL;
             right=NULL;
          }
};
treenode*buildtreelevel()
{
  queue<treenode*>q;
  int value;
  cout<<"enter data"<<endl;
  cin>>value;
  if(value==-1)
  {
    return NULL;
  }
  treenode*root=new treenode(value);
   q.push(root);
  while(!q.empty())
    {
      int leftdata;
      cout<<"enter left data of"<<q.front()->data;
      cin>>leftdata;
      if(leftdata!=-1)
      {
        treenode*leftnode=new treenode(leftdata);
        q.push(leftnode);
        q.front()->left=leftnode;
      }
       int rightdata;
      cout<<"enter right data of"<<q.front()->data;
      cin>>rightdata;
      if(rightdata!=-1)
      {
        treenode*rightnode=new treenode(rightdata);
        q.push(rightnode);
        q.front()->right=rightnode;
      }
   q.pop();  
    }
  return root;
}
treenode*buildtreerecursively()
{
  int value;
  cout<<"enter node"<<endl;
  cin>>value;
  if(value==-1)
  {
    return NULL;
  }
  treenode*root=new treenode(value);
  cout<<"left node of"<<value<<endl;
  treenode*leftnode=buildtreerecursively();
  cout<<"right node of"<<value<<endl;
  treenode*rightnode=buildtreerecursively();
  root->left=leftnode;
  root->right=rightnode;
  return root;
}

void preorder(treenode*root)
{
  if(root==NULL)
    return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void inorder(treenode*root)
{
  if(root==NULL)
  {
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
void postorder(treenode*root)
{
  if(root==NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
int main() {
  // treenode*root=buildtreerecursively();
  treenode*root= buildtreelevel();
  // printtreelevel(root);
  preorder(root);
  cout<<endl;
  inorder(root);
  cout<<endl;
  postorder(root);
  return 0;
}
