#include <bits/stdc++.h> 
#include<stack>
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    bool flag=false;
    stack<char>s1;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]== '(' || s[i]== '+' || s[i]== '-' || s[i]== '*' ||
             s[i]== '/')
            {
                s1.push(s[i]);
            }
      else if(s[i]==')')
      {
          while(s1.top()== '+' || s1.top()== '-' || s1.top()== '*' ||
            s1.top()== '/')
            {
                s1.pop();
                flag=true;
            }
          if(s1.empty())
          {
              return true;
          }
          else if(flag==true && s1.top())
          {
              s1.pop();
              flag=false;
          }
          else
          {
              return true;
          }
      }
    }
    return false;
}
