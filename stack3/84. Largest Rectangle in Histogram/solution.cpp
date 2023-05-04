#include<vector>
class Solution {
public:
  vector<int> prevsmall(vector<int>&heights)
  {
      int n=heights.size();
       vector<int>ans(n);
      stack<int>s;
      s.push(-1);
      for(int i=0;i<n;i++)
      {
          //here we are using s.top()!=-1 because if not write that then for those cases in which prev small element not exist then it compare current value to heights[-1] which is out of range ok!!!!//
          while(s.top() != -1 && heights[i]<=heights[s.top()])
          {
              s.pop();
          }
      ans[i]=s.top();
      s.push(i);
      }
      return ans;
  }
   vector<int> nextsmall(vector<int>& heights)
  {
      int n=heights.size();
      vector<int>ans(n);
       stack<int>s;
      s.push(-1);
      for(int i=n-1;i>=0;i--)
      {
          while(s.top() != -1 && heights[i]<=heights[s.top()])
          {
              s.pop();
          }
      ans[i]=s.top();
      s.push(i);
      }
      return ans;
  }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>prev=prevsmall(heights);
        vector<int>next=nextsmall(heights);
        int maxarea=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(next[i]==-1)
            {
                next[i]=n;
            }
           int area=heights[i]*(next[i]-prev[i]-1);
           maxarea=max(area,maxarea);
        }
        return maxarea;
    }
};
