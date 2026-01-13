//to check whether the given number is composite or not 
#include <iostream>
using namespace std;
int main()
{
    int n,f;
    cout << "enter any number"<<endl;
    cin>>n;
    //for(int i=1;i<n;i++)
    for(int i=1;i < n;i++)
    {
        if(n % i == 0)
        f=i;
    }
        if(f==1)
        cout<<"not composite";
        else
        cout<<"compo";
        cout<<f;
          
}