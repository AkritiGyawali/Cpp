//second largest element in the given array
#include<iostream>
#include<climits>//for INT_MIN
using namespace std;
int main(){
    int mx=INT_MIN;//yo vaneyko sabsey smalest no. 
    int arr[]={1,4,5,6,7,8,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        mx=max(arr[i],mx);
    }
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx) smx=max(arr[i],smx);
    }
    cout<<smx;
    
}