//A tail recursion.
//a function is said to be tail recursion if there is no any operation left to do after the recursive call returns its value.
#include<iostream>
using namespace std;
int z;
int reverse(int n,int z){
    if (n==0) return z;
    else{
        z=(n%10)+z*10;//update z with reverse digit i.e n,z
    return reverse(n/10,z);// there is no operation any occur after the recursive call,so this is the tail recursion. 
    }
}
int main(){
    cout<<reverse(234564,0);
    
// int n=54568;
// int z=0;
// while(n!=0)
// {
// int y=n%10;
//  n=n/10;
// z=y+(z*10);
// }
// cout<<z;
return 0;
}