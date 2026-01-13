//to find sum from 1 to n
/* n+n-1+n-2+.... 2+1  
 n+sum (n-1)*/
#include<iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}
int main(){
    int n=5;
   cout<< sum(n);

}