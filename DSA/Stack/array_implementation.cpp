#include<iostream>
using namespace std;
class stack{
    int capacity;
    int* arr;
    int top;
    public://private member can be acess within the data member.
    stack(int c){
        capacity=c;
        arr=new int[c];
        top=-1;
    }
    void push(int x){
        if(top==capacity-1){
            cout<<"stack overflow"<<endl;
        }
        top+=1;
       arr[top]=x;
        

    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        
        top--;
    }
    int getTop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        return arr[top];
    }
    bool isEmpty(){
      return top==-1;//print true(1)if stack is empty
    }
    int size(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        return top+1;
    }
    bool isFull(){
       return top==capacity-1;//print true(1)if stack is full
}};
int main()
{
    stack s(5);
    
    s.push(4);
    s.push(5);
    cout<<s.getTop()<<endl;//5
    s.push(6);
    s.push(8);
    s.pop();
    s.pop();
    cout<<s.getTop()<<endl;//5
    s.push(9);
   cout<< s.size()<<endl;
    cout<<s.isFull()<<endl;
    s.push(9);
    cout<<s.isFull()<<endl;//4
    return 0;
}