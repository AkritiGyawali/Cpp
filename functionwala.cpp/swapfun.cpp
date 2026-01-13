#include<iostream>
using namespace std;
int swap(int x,int y){//swap(int &x,int &y)..yesley sawp ko x,y rw main fun ko x,y same banayo.other way is pointer.
int z=x;
x=y;
y=z;
}
int main(){
int x=2,y=5,z=0;
cout<<"before swap"<<endl;
cout<<x<<" " <<y;
cout<<endl;
swap(2,5)//yo vaneyko pass by value ho .yedi ya swap(x,y) vako vaya yo execute hunna becoz main fun ko x,y rw swap fun ko x,y farak variable ho.same varialble banauna hamile pass by reference ko help chainxa.
cout<<"after swap"<<endl;
cout<<x<<" "<<y;}