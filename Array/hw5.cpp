//count the element greater than x
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,5,6,7,8,99,77};
    int x=6;
    int count =0;
    for(int i=0;i<8;i++){
        if(arr[i]>x)count++;
    }cout<<count;
}
