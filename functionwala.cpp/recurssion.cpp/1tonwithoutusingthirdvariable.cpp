//to print the number from n to 1
#include<iostream>
using namespace std;
int n;

int print(int n){
    if (n==0) return 0;//base case
    
    print(n-1);//call
    cout<<n<<endl;//work
}int main(){
cout<<"enter the integer"<<endl;
cin>>n;
    print (n);
}