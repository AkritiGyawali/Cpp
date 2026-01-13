//reverse the array
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int arry[5];
    for(int i=0;i<n;i++){
        int j=n-1-i;
            arry[i]=arr[j];
             cout<<arry[i]<<" ";
       
    }  
    
}