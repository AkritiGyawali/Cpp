//to print the reverse  of a given number and their sum
#include<iostream>
using namespace std;
int main(){
    int n=789;
    int a=n;
    int i=0,r;
    while(n%10 !=0){
        r=n%10;
        i=i*10+r;
        n=n/10;
        
      
       
    }
    cout<<i<<endl;
    cout<<a+i;
}