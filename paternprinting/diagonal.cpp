#include<iostream>
using namespace std;
int main(){
int n=13;//row

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if((j==i)||((i+j)==(n+1))){
            cout<<"*";
        } 
        else cout<<" ";
    }
    cout<<endl;
}
}
