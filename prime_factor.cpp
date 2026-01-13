#include<iostream>
using namespace std;
int main()
{
    int i,a,b,n;
    n = 12;
    
    for(i=2;i<n;i++)
    {
        for(int j=2;j<=i;j++)
        {
            do{
                a=n%i;
                b=n/i;

            }while(a==0);
            b=n;
            cout<<b;


        }
      
        
        cout<<endl;
  

    }
return 0;
}