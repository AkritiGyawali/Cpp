#include<stdio.h>
int check_prim(int n)
{
    
    for (int i = 2; i<n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n = 12;
    int checker = 2;
    printf("Prime factors of %d are: ", n);
    printf("1 ");
    for (int i = 2; i<=n; i++)
    {
        checker = 2;
        for (int j = 2;j <= n ; j++)
        {
            if (n % checker == 0)
          {
            // if (check_prim(checker))
            {
                n = n / checker;
                printf("%d ", checker);
               
            }
          }
          else checker++;
        
        }
        
    }
    return 0;
}