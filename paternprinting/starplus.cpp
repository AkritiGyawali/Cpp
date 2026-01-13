#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float n=7;
    
    
    float a ;
    a=ceil(n/2);
    cout<<a<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          if((i==a)||(j==a+a-1)){
            cout<<"*  ";
          }  
          else{
            cout<<" " ;
          }
        }
        cout<<endl;
    }
    
}