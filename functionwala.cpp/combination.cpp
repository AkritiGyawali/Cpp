// to find the combination of two number
#include<iostream>
using namespace std;
int com(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n=2,r=2;
    int a,b,c;
    a=com(n);
    b=com(r);
    c=com(n-r);
    cout<<a/(b*c);
    return 0;
}
