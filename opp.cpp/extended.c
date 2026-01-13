#include<stdio.h>
int main(){
    int n1,n2,GCD;
    printf("enter amy two number\n");
    scanf("%d",&n1,&n2);
    while(1)
{
    if (n1>n2)
{
    int p,q,x,y;
    q=n1/n2;
    p=n1%n2;
    x=q;
    y=p;
    n1=(n2*x)+y;
    x=n1;
    y=n2;
    int GCD=y;
    y=0;break;
}
else{
    int p,q,x,y;
    q=n2/n1;
    p=n2%n1;
    x=q;
    y=p;
    n2=(n1*x)+y;
    x=n2;
    y=n1;
    int GCD=y;
    y=0;break;

}
printf("%d",GCD);
break;
}
return 0;
}