#include<stack>
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int maxlength=0;
        int length=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                      length=i-st.top();
                    maxlength=max(maxlength,length);
                }
                else
                {
                     st.push(i);
                 
                }
            }
        }
        return maxlength;
    }
};
