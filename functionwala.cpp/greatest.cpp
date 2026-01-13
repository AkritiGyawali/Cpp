//to find greatest number among three number using function
#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a=1,b=5,c=-9;
int x=min(a,min(b,c));
cout<<x;

return 0;
}