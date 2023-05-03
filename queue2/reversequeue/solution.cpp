#include <iostream>
#include<queue>
using namespace std;
///////////////////////////recursive solution////////////////////
void reverseq(queue<int>&q)
{
  if(q.empty())
  return ;
  int temp=q.front();
  q.pop();
  reverseq(q);
  q.push(temp);
  }
int main() {
 queue<int>q;
 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);
 reverseq(q);
 while(!q.empty())
 {
   cout<<q.front()<<" ";
   q.pop();
 }
  return 0;
}
