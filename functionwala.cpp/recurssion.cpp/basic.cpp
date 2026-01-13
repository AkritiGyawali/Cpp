//to print the number from n to 1
#include<iostream>
using namespace std;
int n;

int print(int n){
    if (n==0) return 0;
    
    cout<<n<<endl;
    print(n-1);
}int main(){
cout<<"enter the integer"<<endl;
cin>>n;
    print (n);
}