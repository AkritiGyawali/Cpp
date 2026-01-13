#include<iostream>
using namespace std;
class A{
    public:
   virtual void show(){
        cout<<"this is class A"<<endl;
    }
};
class B: public A{
    public:
    void show(){
        cout<<"this is class B"<<endl;
    }
};
class C :public A{
    public:
    void show(){
        cout<<"this is class C"<<endl;
    }
};
int main(){
    A *a1,a;
    a1=&a;
    a1->show();
    B b1;
    a1=&b1;
    a1->show();
    C c1;
   a1=&c1;
    a1->show();
}