#include <iostream>
#include<queue>
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
treenode*treeinputlevelwise()
{
	int data;
	cout<<"enter data"<<endl;
	cin>>data;
	if(data==-1)
	return NULL;
	treenode*root=new treenode(data);
	queue<treenode*>q;
	q.push(root);
	int left,right;
	while(!q.empty())
	{
		cout<<"enter left child of"<<q.front()->data;
		cin>>left;
		if(left!=-1)
		{
		treenode*leftnode=new treenode(left);
		q.push(leftnode);
		root->leftchild=leftnode;
		}
		cout<<"enter right child of"<<q.front()->data;
		cin>>right;
		if(right!=-1)
		{
		treenode*rightnode=new treenode(right);
		q.push(rightnode);
		root->rightchild=rightnode;
	    }
		q.pop();
	}
	return root;
}

treenode*treeinputusingrecursiom()
{
    int value;
    cout<<"enter the data"<<endl;
    cin>>value;
    if(value==-1)
    return NULL;
    treenode*root=new treenode(value);
cout<<" for left child of "<<value<<" ";
    treenode*lchild=treeinputusingrecursiom();
    cout<<"for right child of "<<value<<" ";
    treenode*rchild=treeinputusingrecursiom();
    root->leftchild=lchild;
    root->rightchild=rchild;
    return root;
}
int main() {
// treenode*rootnode=treeinputusingrecursiom();
treenode*rootnode=treeinputlevelwise();
 cout<<rootnode->data;
  return 0;
}
