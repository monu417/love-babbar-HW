#include <iostream>
using namespace std;
class treenode{
  public:
    int data;
    treenode*leftchild;
    treenode*rightchild;
    treenode(int data)
    {
      this->data=data;
      leftchild=NULL;
      rightchild=NULL;
    }
};
treenode* treeinput()
{
    int value;
    cout<<"enter the data"<<endl;
    cin>>value;
    if(value==-1)
    return NULL;
    treenode*root=new treenode(value);
cout<<" for left child of "<<value<<" ";
    treenode*lchild=treeinput();
    cout<<"for right child of "<<value<<" ";
    treenode*rchild=treeinput();
    root->leftchild=lchild;
    root->rightchild=rchild;
    return root;
}
int main() {
 treenode*rootnode=treeinput();
 cout<<rootnode->data;
  return 0;
}
