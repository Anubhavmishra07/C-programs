#include<stdio.h>
void f1(int);
int main()
{int n;
printf("enter a number\n");
scanf("%d",&n);
f1(n);
return 0;}
void f1(int n)
{ if (n==1)
    printf("1 ");
   else 
    {f1(n-1);
     printf("%d ",n);}
}
