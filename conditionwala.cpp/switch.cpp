//switch vaney ko ni if else lai replace ho
//calculator using switch
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
    switch(opr){
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        cout<<"error";
        break;
    }
    return 0;
}