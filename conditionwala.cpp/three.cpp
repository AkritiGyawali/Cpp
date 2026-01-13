//to check whether the given number is 3 digit or not
#include<iostream>
using namespace std;
int main(){
int n=1000;
if(n>99 && n<1000)cout<<"3 digit number";
//&& ko sato and lekhna ni painxa and this is logical operator
//and operator chalna ko lagi duitai condition true hunu parxa
else cout<<"not a 3 digit number";

return 0;
}
