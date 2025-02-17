#include<stdio.h>
int main()
{int i,a,b,c=0,n;
printf("enter two nos.\n");
scanf("%d%d",&a,&b);
n=a;
while (1)
{for (i=1;i<=a && a!=n ;i++)
{
    if (a%i==0)
        c++;
}
if (c==2 && a<b && a!=n)
{
    printf("%d ",a);
}
c=0;
a++;
if (a>=b)
break;}
return 0;}