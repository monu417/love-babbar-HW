class MinStack {
public:
vector<pair<int,int>>arr;
    MinStack() {
        
    }
    
    void push(int val) {
        if(arr.empty())
        {
            pair<int,int>p;
            p.first=val;
            p.second=val;
            arr.push_back(p);
        }
        else
        {
            pair<int,int>p;
            p.first=val;
            p.second=min(val,arr.back().second);
            arr.push_back(p);
        }
    }
    
    void pop() {
        if(!arr.empty())
        {
            arr.pop_back();
        }
    }
    
    int top() {
            int ans= arr.back().first;
            return ans;
     }
    
    int getMin() {
            int ans=arr.back().second;
            return ans;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
