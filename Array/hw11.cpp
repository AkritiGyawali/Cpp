//write a program to reverse an array without using any extra array.check palindrome

#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,3,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    //reverse
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    if(arr[i]==arr[j])cout<<"the given arry  is palindrome";
    else cout<<"not palindrome";
}