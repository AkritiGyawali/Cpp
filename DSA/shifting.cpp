#include<iostream>
using namespace std;
void shift(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    // int arr[n];//static memory allocated
    int*arr=new int[n];//dynamically allocated memory//a better way to do
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;
    shift(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;//free allocated memory

}
