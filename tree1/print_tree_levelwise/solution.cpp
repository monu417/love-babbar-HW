void printtreelevel(treenode*root)
{
  queue<treenode*>q;
  if(root==NULL)
  {
    return;
  }
  q.push(root);
  cout<<"root data : "<<q.front()->data<<endl;
  while(!q.empty())
    {
      
      if(q.front()->left!=NULL)
      {
        cout<<"left node of"<<q.front()->data<<": "<<q.front()->left->data<<endl;
        q.push(q.front()->left);
      }
      else{
          cout<<"left node of"<<q.front()->data<<": "<<-1<<endl;
      }
      if(q.front()->right!=NULL)
      {
        cout<<"right node of"<<q.front()->data<<": "<<q.front()->right->data<<endl;
        q.push(q.front()->right);
      }
      else{
         cout<<"right node of"<<q.front()->data<<": "<<-1<<endl;
      }
      q.pop();
    }
}
