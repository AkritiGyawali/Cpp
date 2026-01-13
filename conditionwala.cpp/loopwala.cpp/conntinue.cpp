//continue-to skip a particular loop
//to print from 1 to 100 expect 3 and 5
#include<iostream>
using namespace std;
int main()
{
  for (int i = 1 ; i<=100; i++)
  {
    if(i == 3 || i == 5) continue; 
    else cout<< i << " ";
  }
  return 0;
}