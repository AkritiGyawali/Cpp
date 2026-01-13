//to count the number of digit of a given number
#include<iostream>
using namespace std;
int main(){
    int n=123456789;
    int i=0;
    while(n%10 !=0){
        
        n=n/10;
        i++;
       
    }
    cout<<i;
}