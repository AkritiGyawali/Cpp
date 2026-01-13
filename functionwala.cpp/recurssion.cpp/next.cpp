//to print from 1 to n
#include<iostream>
using namespace std;
int a;
int print(int n){
    if(n>a) return 0;
 cout<<n<<endl;
 print(n+1);   
}
int main(){
    int n;
cout<<"enter the integer "<<endl;
cin>>a;
print(1);
}