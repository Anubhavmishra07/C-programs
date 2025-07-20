#include<stdio.h>
void swapvar(int*,int*);
int main ()
{   int a,b;
    printf("enter the value of first variable\n");
    scanf("%d",&a);
    printf("enter the value of second variable\n");
    scanf("%d",&b);
    swapvar(&a,&b);
    printf("after swapping:\nvalue of first variable = %d and value of second variable = %d",a,b);
    return 0;
}
void swapvar(int*p,int*q)
{ int t;
    t=*p;
    *p=*q;
    *q=t;
}