#include<iostream>
using namespace std;
class alpha{
    private:
    int a;
    public:
    void getdata(int x){
        a=x;
        cout<<"enter the first number"<<endl;
        cin>>a;

    }
    friend class beta;
};
class beta{
    private:
    int b;
    public:
    void getdata1(int y){
        b=y;
        cout<<"enter the second number"<<endl;
        cin>>b;
    }
    void fun(alpha z){
        int e;
        e=z.a+b;
        cout<<e;
    }
};



int main(){
alpha a1;
a1.getdata();
beta b1;
b1.getdata1();
b1.fun();

}
