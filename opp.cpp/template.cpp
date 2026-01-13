#include<iostream>
using namespace std;
template <class T>
void swap(T&a1,T&a2){
    T temp=a1;
    a1=a2;
    a2=temp;
}
int main(){
    int i1=2,i2=4;
    float f1=3.002,f2=4.003;
    cout<<"before swap:"<<endl;
    
    cout<<"i1="<<i1<<"i2="<<i2<<endl;
    swap(i1,i2);
    swap(f1,f2);
    cout<<"after swap:"<<endl;
    cout<<"i1="<<i1<<"i2="<<i2<<endl;
    cout<<"f1="<<f1<<"f2="<<f2<<endl;
    return 0;
}