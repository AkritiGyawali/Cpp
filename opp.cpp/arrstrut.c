#include<stdio.h>
struct std{
    int roll;
    int grad;
    char nam[20];
    float marks;
         
    }
    };
int main()
{
    struct std s1[5];

    s1[1].grad = 11;
    s1->roll;
    printf("%d", s1[1].grad);
    return 0;
}