#include<iostream>
using namespace std;

#define N 10
 int top=-1;
 int stack[N];
void push();
void pop();
void peek();
void IsEmpty();
void IsFull();
int main(){
    cout<<"total capacity:"<<N<<endl;
    int choice;

    while(1){
        cout<<"1.exit 2.push 3.pop 4.peek.5.isempty 6.isfull"<<endl;
        cin>>choice;

    
    switch(choice ){
        case 1:exit(1);
        break;
    
        case 2:push();
        break;
        case 3:pop();
        break;
        case 4:peek();
        break;
        case 5:IsEmpty();
        break;
        case 6:IsFull();
        break;
        default:cout<<"choose a no.(1-6)"<<endl;
}}


}

void push(){
    if(top==N-1)cout<<"stack is full"<<endl;
    else{
        int x;
        cout<<"enter the element to be inserted:"<<endl;
        cin>>x;
        top+=1;
        stack[top]=x;
        cout<<"the inserted element is:"<<x<<endl;
    }
}
void pop(){
    if(top==-1)cout<<"stack is empty,cannot pop"<<endl;
    else{
        int x;
        
        x=stack[top];
        cout<<x<<" is deleted"<<endl;
        top-=1;//yedi yo garena vaney peek will show the same element that was deleted
    }
}
void peek(){
    int x=stack[top];
    cout<<"the topmost element is:"<<x<<endl;   
}
void IsEmpty(){
    if(top==-1)cout<<"stack is empty"<<endl;
    else cout<<"stack isnot empty"<<endl;
}
void IsFull(){
    if(top==N-1)cout<<"stack is full"<<endl;
    else cout<<"stack isnot full"<<endl;
}

