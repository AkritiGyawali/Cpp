#include<iostream>
using namespace std;
class A{
    public:
    void getdata(){
        cout<<"same "<<endl;
    }
};
class B{
    public:
    void getdata(){
        cout<<"different"<<endl;
    }
};
int main(){
    A a1;
    B b1;
    a1.getdata();
    b1.getdata();
    return 0;
}