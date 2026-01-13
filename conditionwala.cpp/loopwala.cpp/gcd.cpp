#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i,j;
    int x=60,y=36;
    int z=min(x,y);
    int a=max(x,y);
    //cout<<z;
for(int i=(z);i>=1;i--){
    if(z%i==0&&a%i==0) {
        
        cout<<i;break;}
}  cout<<endl;  
// for(int j=1;j<=y;j++){
//     if(y%j==0) cout<<j;
// }
// for(int z=1;z<=x;z++){
// if(i==j){
// cout<<max(i,j); 
// }}   
}