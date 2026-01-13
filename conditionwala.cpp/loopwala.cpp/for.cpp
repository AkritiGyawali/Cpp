//to print from 10 to 0 using for
#include<iostream>
using namespace std;
int main()
{
  for (int i = 10 ; i!=0; i--)
  {
    if(i % 2==0) continue; 
    else cout<< i << " ";
  }
  return 0;
}