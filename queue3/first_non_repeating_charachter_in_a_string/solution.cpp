#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;
void solve(string& s,string& ans,int*freq)
{
  queue<char>q;
  for(int i=0;i<s.size();i++)
  {
      freq[s[i]-'a']++;
      if(freq[s[i]-'a']==1)
      {
        q.push(s[i]);
      }
      while(!q.empty())
      {
    if(freq[q.front()-'a']==1)
    {
      ans=ans+q.front();
      break;
    }
    else
    {
        q.pop();
      }
    }
    if(q.empty())
      {
        ans=ans+"#";
      }
  }
}
int main() {
 string s="zrefhhauzc";
 string ans="";
 int freq[26]={0};
 solve(s,ans,freq);
 cout<<ans<<endl;
  return 0;
}
