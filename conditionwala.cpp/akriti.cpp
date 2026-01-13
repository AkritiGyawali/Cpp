//to determine whether akriti has made profit or loss and find the value
#include <iostream>
using namespace std;
int main()
{
    int cp=300,sp=100;
    if(sp>cp)
    {
        cout<<"akriti has made profit \n";
        cout<<"profit="<<sp-cp<<"\n";
    
    }
    if(cp>sp)
    {
        cout<<"akriti has made loss\n";
        cout<<"loss="<<cp-sp<<endl;
    }
    if(cp==sp)cout<<"neither profit nor lost";
    return 0;
}