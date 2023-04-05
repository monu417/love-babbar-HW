#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;
void solve(vector<int>v,int& maxi,int sum,int i)
{
  if(i>=v.size())
  {
    maxi=max(sum,maxi);
    return;
  }
  solve(v,maxi,sum+v[i],i+2);
  solve(v,maxi,sum,i+1);
}
int main() {
 vector<int>v{2,1,4,9};
 int maxi=INT_MIN;
 int sum=0;
 int i=0;
solve(v,maxi,sum,i);
 cout<<maxi<<endl;
}
