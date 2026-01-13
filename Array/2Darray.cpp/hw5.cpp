//to find the sum of all the element of a matrix from(x1,y1)(x2,y2)
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int x1,x2,x3;
    int x4;
    cin>>x1>>x2>>x3>>x4;
    int sum=0;
    for(int i=x1;i<=x3;i++){
        for(int j=x2;j<=x4;j++){
            sum+=arr[i][j];
            
        }
    }cout<<sum;
}