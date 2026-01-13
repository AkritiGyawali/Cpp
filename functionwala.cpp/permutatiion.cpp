//to find permutation of two number
#include<iostream>
using namespace std;
int per(int c)
{
    int f=1;
    for(int i=1;i<=c;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n=6,r=1;
    cout<<per(n)/per(n-r);
    return 0;
}
