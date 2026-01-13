#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row \n";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++)
           {
            if(i%2!=0)  
            cout<<j<<" " ;
            else
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
} 