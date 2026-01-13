//to find factorial of a number without using function
#include<iostream>
using namespace std;
int n,a,sum=1;
int main()
{
  n=2;  
    
while(n!=0){
    sum=n*sum;
    n=n-1;


}
cout<<sum;
return 0;
}