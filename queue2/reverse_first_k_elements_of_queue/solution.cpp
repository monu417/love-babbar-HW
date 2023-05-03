#include <iostream>
#include<stack>
#include<queue>
using namespace std;
void reversekele(queue<int>&q, int k)
{
  int n=q.size();
  stack<int>s;
  int count=1;
  while(count<=k)
  {
    int temp=q.front();
    q.pop();
    s.push(temp);
    count++;
  }
  while(!s.empty())
  {
    int temp=s.top();
    s.pop();
    q.push(temp);
  }
  count=1;
  while(count<=n-k)
  {
    int temp=q.front();
    q.pop();
    q.push(temp);
    count++;
  }
}
int main() {
  queue<int>q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  reversekele(q,4);
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
  return 0;
}
