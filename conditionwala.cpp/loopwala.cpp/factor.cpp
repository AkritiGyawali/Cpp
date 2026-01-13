//to find the highest factor of a given number (without itself)
#include <iostream>
using namespace std;
int main()
{
    int n,f;
    cout<<"enter any number"<<endl;
    cin>>n;
    //for(int i=1;i<n;i++)
    for(int i=1;1<=n/2;i++)
    {
        if(n%i==0)
        f=i;
        
    }
cout<<f;//yo wala tw decent code vhayo hai..loop n times chaleyxa yesma tara factor tw n/2 hunxa vaneysii n/2 samma ni chalauna sakiyo .
}