//make the second mul of the odd element and increse by 10 to the even element
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl; 
    int arr[n];
    cout<<"enter the element of an array"<<endl;
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i= 0;i<n;i++){
        if (arr[i]%2==0) cout<<arr[i]+10<<endl;
        
        else cout<<arr[i]*2<<endl;
    }
}