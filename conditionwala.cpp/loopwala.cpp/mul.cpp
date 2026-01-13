#include<iostream>
using namespace std;
int main(){
    int n=5041;
    int i=1,r;
    while(n % 10 != 0){
         r=n%10;
        n=n/10;
       
         if(r==0) continue;
       
        i=i*r;
       
    }
    cout<<i;
}