//to print the sum of even digit of a given number
#include<iostream>
using namespace std;
int main(){
    int n=1234;
    int i=0,r;
    while(n%10 !=0){
        r=n%10;
        n=n/10;
        if(r%2==0){
            i += r;
        }
      
       
    }
    cout<<i;
}