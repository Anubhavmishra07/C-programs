#include<stdio.h>

int fact(int );
int main()
{int n,s=0;
printf("enter the value of n ");
scanf("%d",&n);
for (int i=1;i<=n;i++)
s+=fact(i)/i;
printf("sum of the series = %d",s);
return 0;}

int fact(int n)
{   if (n==1 || n==0)
    return 1;
    int f=1;
    for (int i=1;i<=n;i++)
    f*=i;
    return f; 
}
