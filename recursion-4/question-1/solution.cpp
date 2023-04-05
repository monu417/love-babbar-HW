#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
int mincoin(vector<int>&v,int target,int mini)
{
  if(target==0)
  return 0;
  if(target<0)
  return INT_MAX;
  for(int i=0;i<v.size();i++)
  {
     int ans=mincoin(v,target-v[i],mini);
     if(ans!=INT_MAX)
     mini=min(mini,ans+1);
  }
  return mini;
}
int main() {
int target=12;
vector<int>v{6,4,5};
int mini=INT_MAX;
int ans =mincoin(v,target, mini);
cout<<ans<<endl;
  return 0;
}
