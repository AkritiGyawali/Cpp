#include<stdio.h>
struct self
{
    int a;
    char b;
    struct self *ptr;
};
int main()
{
    int b;
    struct self s2,s3;
    s2.a = 22;
    s2.b = 'd';
    s3.a = 55;
    s3.b = 'j';
    s2.ptr = &s3 ;
    printf(" %d ",s2.ptr->a );
    return 0;
}
