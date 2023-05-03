////////////////////////////////////////////////////////////////////////////////////////////////////khudke test case wala
#include <iostream>
#include<stack>
using namespace std;

int main() {
 string p="([{)])[]";
stack<char>s;
for(int i=0;i<p.size();i++)
{
  if(p[i]=='(' || p[i]=='[' || p[i]=='{')
  {
    s.push(p[i]);
  }
  else
  {
    if(s.top()==p[i])
    {
    s.pop();
    }
  }
}
if(s.empty()){
  cout<<"yes it is valid"<<endl;
}
else{
  cout<<"no it is not valid"<<endl;
}
  return 0;
}
/////////////////////////////////////////////////////////////////////////////////leetcode wala
#include<stack>
class Solution {
public:
  bool isValid(string p)
    {
      if(p.size()<=1)
      {
        return false;
      }
        stack<char>s;
       for(int i=0;i<p.size();i++)
        {
           if(p[i]=='(' || p[i]=='[' || p[i]=='{')
             {
                 s.push(p[i]);
             }
           else 
             {
               if(!s.empty())
                   {
                    if(p[i]==')' && s.top()=='(')
                       {
                         s.pop();
                        }
                    else if( p[i]==']' &&s.top()=='[')
                        {
                         s.pop();
                        }
                    else if( p[i]=='}' && s.top()=='{')
                        {
                         s.pop();
                        }
                    else
                        {
                         return false;
                        }
                    }
                else
                  {
                  return false;
                  }
              }
        }    
        if(s.empty())
          {
           return true;
          }
        else
          {
            return false;
            }        
    }
};
