//second smallest element in the given array
#include<iostream>
#include<climits>//for INT_MIN
using namespace std;
int main(){
    int mx=INT_MAX;//yo vaneyko sabsey largest no. 
    int arr[]={1,4,5,6,7,8,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        mx=min(arr[i],mx);
    }
    int smx=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx) smx=min(arr[i],smx);
    }
    cout<<smx;
    
}