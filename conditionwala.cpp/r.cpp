//to input an integer and tell it is divisible by 5 or 3 but not by 15
#include<iostream>
using namespace std;
int main()
{
    int n=45;
    if(n%5==0||n%3==0)//&&n%15!=0)cout<<"n is divisible by 3 or 5";
    {
        if(n%15!=0)
        cout<<"yes";
        else cout<<"no";
    }
   
    return 0;
}