#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int tar=9;
    int sum,a=2;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum=arr[i]+arr[j];
            if(sum==tar){
                cout<<j<<" "<<i;
                a=0;
                break;
            }
        }cout<<endl;
        if(a==0)break;
        
    }
}