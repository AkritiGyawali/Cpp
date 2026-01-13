//given an integer n then we need to store the square of the element till n in an array
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
        cout<<pow(arr[i],2);
        cout<<endl;
    }
}