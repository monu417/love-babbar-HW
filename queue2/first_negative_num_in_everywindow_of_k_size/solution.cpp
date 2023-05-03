#include <iostream>
#include<vector>
#include<queue>
using namespace std;

//////////////////////////////////two loop solution/////////////////////////
// void ans(int*arr,int n,vector<int>&v,int k)
// { int j,i;
//   for(i=0;i<n-k+1;i++)
//   {
//     for(j=i;j<i+k;j++)
//     {
//       if(arr[j]<0)
//       {
//         v.push_back(arr[j]);
//         break;
//       }
//     }
//     if(j==i+k)
//     {
//       v.push_back(0);
//     }
//   }
// }
///////////////////////////////using queue////////////////////////////////////
void ans (int*arr,int n,vector<int>&v,int k)
{
queue<int>q;
for(int i=0;i<k;i++)
{
  if(arr[i]<0)
  {
    q.push(i);
  }
}
if(!q.empty())
{
  v.push_back(arr[q.front()]);
}
else
{
  v.push_back(0);
}
for(int i=k;i<n;i++)
{
  while(!q.empty() && i-q.front()+1>k)
  {
    q.pop();
  }
  if(arr[i]<0)
  {
    q.push(i);
  }
 if(!q.empty())
{
  v.push_back(arr[q.front()]);
}
else
{
  v.push_back(0);
} 
}
}
int main() {
  int n=8;
  int k=3;
 int arr[]={12,-1,-7,8,-15,30,16,20};
 vector<int>v;
 ans(arr,n,v,k);
 for(int i=0;i<v.size();i++)
 {
   cout<<v[i]<<" ";
 }
  return 0;
}
