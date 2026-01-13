//calculator using if else
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char opr;
    cout<<"enter two number";
    cin>>a>>b;
    cout<<"enter operator(+,-,*,/)";
    cin>>opr;
    if(opr=='+')cout<<a+b;
    if(opr=='-')cout<<a-b;
    if(opr=='*')cout<<a*b;
    if(opr=='/')cout<<a/b;
}