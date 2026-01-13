#include<stdio.h>
int main()
{
    int n = 100 ; 
    int check = 1;
   for (int i = 2; i < 100; i++)
   {
    for (int j = 2; j < i ; j++)
    {
        if ( i % j == 0)
        {
          check = 0;
          break;
           
          

        }
        else 
        check = 1;
        
   
    }
        if (check == 1)
         printf("%d\n", i );
    
   }
      
   
    return 0;
}