#include<iostream>
using namespace std;
binary_search(int arr,int l,int r,int key)
{
    bool flag=0;
    int m;
    if(l<=r){
        m=(l+r)/2;
        if(key==arr[m]){
            flag=1;
        }
        if(key<arr[m]){
           return binary_search(arr,l,m-1,key);
        }
        else
        return binary_search(arr,l,m+1,key);
    }
    else return flag;
}
int main(){
    int flag;
    int arr[10]={-1,5,6,18,19,25,46,78,102,114};
    int key=6;
    binary_search(arr,0,9, key);
    if(flag==0){
        cout<<"element not found"<<endl;
    }else
    cout<<"element found"<<endl;
}