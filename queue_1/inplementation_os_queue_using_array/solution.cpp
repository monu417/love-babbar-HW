#include <iostream>
using namespace std;
class queue{
        int size;
        int*arr;
        int front;
        int rear;
        public:
        queue(int size)
        {
          this->size=size;
          arr=new int[size];
          front=0;
          rear=0;
        }
        void push(int data)
        {
          if(rear==size)
          {
            cout<<"overflow"<<endl;
          }
          else
          {
            arr[rear]=data;
            rear++;
          }
        }
        void  pop()
        {
          if(rear==0)
          {
            cout<<"underflow"<<endl;
          }
          else{
            arr[front]=-1;
            front++;
            if(front==rear)
            {
              front=0;
              rear=0;
            }
          }
        }
        int getsize()
        {
          return rear-front;
        }
        int getfront()
        {
          if(rear==0)
          {
            cout<<"cannot access element"<<endl;
            return -1;
          }
          else{
            return arr[front];
          }
        }
        bool isempty()
        {
          if(rear==0)
          {
            return true;
          }
          else{
            return false;
          }
        }
};
int main() {
  queue q(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  q.push(70);
  cout<<q.getsize()<<" "<<q.getfront()<<endl;
  q.pop();
  cout<<q.getsize()<<" "<<q.getfront()<<endl;
  cout<<q.isempty()<<endl;
  return 0;
}
