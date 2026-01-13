//to find the highest factor of a given number (without itself) using break
#include <iostream>
using namespace std;
int main()
{
    int n,f;
    cout<<"enter any number"<<endl;
    cin>>n;
    //ulto loop chaluda hunxa
    for(int i=n/2;i>=2;i--)
    {
        if(n%i==0)
        f=i;
        break;//suru mw jasley divide garey rw remainder 0 hunxa tespaxi loop break hunxa
        
    }
cout<<f;
}