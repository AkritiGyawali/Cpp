//to print the sum of a given number
#include<iostream>
using namespace std;
int main(){
    int n=1230;
    int i=0,r;
    while(n%10 !=0){
         r=n%10;
        n=n/10;
       
        i=i+r;
       
    }
    cout<<i;
}