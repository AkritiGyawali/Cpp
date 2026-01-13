#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row and column\n";
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
} 