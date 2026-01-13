#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float n=19;
    
    
    float a ;
    a=ceil(n/2);
    cout<<a<<endl;
    for(int i=1;i<=n;i++){
        for( int j=1;j<=n-i;j=j+2){
            cout<<" ";
            
        }
        for(int k=1;k<=2*i-1;k++){
         
            cout<<"*";
            if(i==n){

            }
         
        
          
        }
        cout<<endl;
    }
    
}