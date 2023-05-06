#include<iostream>
using namespace std;
class stack{
		public:
	int n;
	int*arr;
	int top;
		stack(int size)
		{
			n=size;
			arr=new int(size);
			top=-1;
		}
	    void push(int data)
	    {
	    	if(top==n-1)
	    	{
	    		cout<<"stack overfull"<<endl;
	    		return;
			}
			top+=1;
			arr[top]=data;
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"underflow"<<endl;
				return;
			}
			top--;
		}
		int getsize()
		{
			return top+1;
		}
		int gettop()
		{
			if(top==-1)
			{
				cout<<"stack is empty"<<endl;
				return -1;
			}
			return arr[top];
		}
		bool isempty()
		{
			if(top==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	};
	int main()
	{
		stack s(15);
		s.push(10);
		s.push(20);
		s.push(30);
		s.push(40);
		s.push(50);
		s.push(60);

		cout<<s.getsize()<<endl;
		s.pop();
		s.pop();
		s.pop();
		s.pop();
		cout<<s.getsize();
	}
