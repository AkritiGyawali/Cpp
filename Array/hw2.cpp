//calculate the product of all the element using array
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the element of the array :"<<endl;
    for(int i=0;i<=4;i++){
      cin>>arr[i];  
    }int sum=1;
    for(int i=0;i<=4;i++){
      
      sum=sum*arr[i];
      
    }
    cout<<sum;
}