#include<iostream>
using namespace std;
int main()
{
    int a =6, b = 4 ;
    int max , hcf = 1;
    (a>b)? max = b:max = a;
    //cout<<max;

    for (int i = 1; i <= max;i++)
    {
        if (a % i == 0 && b % i == 0)
         hcf = i;
    }
    cout<<hcf;
}