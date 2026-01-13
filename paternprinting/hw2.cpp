#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row \n";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=m;j>=i;j--)
           {
            
            cout<<j<<" " ;
           
        }
        cout<<endl;
    }
} 