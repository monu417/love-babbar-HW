#include <iostream>
#include<stack>
using namespace std;
void insert(stack<int>&s,int size,int data)
{
  if(s.empty())
  {
    s.push(data);
    return;
  }
  if(data<=s.top())
  {
     s.push(data);
     return;
  }
  int target=s.top();
  s.pop();
  insert(s,size,data);
  s.push(target);
}
void sort(stack<int>&s,int size)
{
  if(size==1)
  {
    return;
  }
  if(s.empty())
  {
    return;
  }
  int data=s.top();
  s.pop();
  sort(s,size);
  insert(s,size,data);
}
int main() {
  int size=5;
  int input;
stack<int>s;
for(int i=0;i<size;i++)
{
  cin>>input;
  s.push(input);
}
sort(s,size);
while(!s.empty())
{
  cout<<s.top()<<" ";
  s.pop();
}
  return 0;
}
