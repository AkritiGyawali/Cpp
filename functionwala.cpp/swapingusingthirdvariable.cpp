#include<iostream>
using namespace std;
int main(){
int x=2,y=5,z=0;
cout<<"before swap"<<endl;
cout<<x<<" " <<y;
cout<<endl;
z=x;
x=y;
y=z;
cout<<"after swap"<<endl;
cout<<x<<" "<<y;}