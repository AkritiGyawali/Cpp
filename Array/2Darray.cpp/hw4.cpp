//to find the sum of all the element of a matrix
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum*=arr[i][j];
            
        }
    }cout<<sum;
}