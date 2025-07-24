#include <stdio.h>
int f1(int,int);
int main()
{
    int x,n;
    printf("enter the no. x and the power n ");
    scanf("%d%d", &x ,&n);
    if (x==0 && n==0)
    printf("not defined");
    else
   printf("%d^%d = %d",x,n,f1(x,n));
   
}

int f1(int x,int n)
{
    if (n==0)
    return 1;
  return f1(x,n-1)*x;
}
