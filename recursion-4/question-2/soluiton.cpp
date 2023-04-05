#include <iostream>
#include<limits.h>
using namespace std;
int solve(int n,int x,int y,int z)
{
  if(n==0)
  return 0;
  int a=INT_MIN;
  int b=INT_MIN;
  int c=INT_MIN;
  if((n-x)>=0)
  {
    a=solve(n-x,x,y,z)+1;
  }
  if((n-y)>=0)
  {
    b=solve(n-y,x,y,z)+1;
  }
  if((n-z)>=0)
  {
    c=solve(n-z,x,y,z)+1;
  }
  int ans=max(a,max(b,c));
  return ans;
}
int main() {
 int n=8;
 int x=3,y=3,z=3;
 int ans=solve(n,x,y,z);
 if(ans<0)
 ans=0;
 cout<<ans<<endl;
  return 0;
}


// second solution

#include <iostream>
#include<limits.h>
using namespace std;
int solve(int n,int x,int y,int z)
{
  if(n==0)
  return 0;
  if(n<0)
  return INT_MIN;
  
   int a=solve(n-x,x,y,z)+1;
   int b=solve(n-y,x,y,z)+1;
   int c=solve(n-z,x,y,z)+1;
  
  
  int ans=max(a,max(b,c));
  return ans;
}
int main() {
 int n=18;
 int x=3,y=3,z=3;
 int ans=solve(n,x,y,z);
 if(ans<0)
 ans=0;
 cout<<ans<<endl;
}
