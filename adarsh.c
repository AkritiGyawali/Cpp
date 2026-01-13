#include<stdio.h>

int main()
{
    int i,a,b,n;
    n = 121;
    
    for(i=2;i<n;i++)
    {
        for(int j=2;j<=i;j++)
        {
       if(a==0){
                a=n%i;
                b=n/i;
       }
            n=b;
           printf("%d ",b);


        }
      
        
     
  

    }
return 0;
}
