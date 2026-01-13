//to find the max element in matrix
#include<iostream>
#include<climits>
using namespace std;
int main(){
int mx=INT_MIN;
int a[2][2]={{4,93},{999,2}};
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        mx=max(mx,a[i][j]);
    }
}cout<<mx;
}