#include<iostream>
using namespace std;
int gcd(int x,int y){
    if(y==0)return x;
    else 
    return gcd(y,x%y);
}

int main(){
int x,y;
cout<<"enter two number to find gcd"<<endl;
cin>>x>>y;
int z=gcd(x,y);
cout<<"the gcd of " <<x<<" and "<<y<<" is:"<<z;
}