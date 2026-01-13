
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,5,6,7,8,99,77};
    int x=6;
    int sum1 =0;
    
    for(int i=0;i<8;i+=2){
       sum1+=arr[i];
    }cout<<sum1<<endl;
int sum2=0;
    for(int i=1;i<8;i+=2){
       sum2+=arr[i];
    }cout<<sum2<<endl;
    int diff;
    diff=sum1-sum2;
    cout<<diff;
}

