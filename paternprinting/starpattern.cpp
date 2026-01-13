#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row \n";
    cin>>m;
    for(int i=m;i>=1;i--){
        for(int j=1;j<=i;j++)
           {
            
            cout<<m-i+1<<" " ;
           
        }
        cout<<endl;
    }
} 