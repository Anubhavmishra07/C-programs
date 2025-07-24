#include<stdio.h>
int main()
{int a,b,c;
printf("enter two nos.\n");
scanf("%d%d",&a,&b);
for (int i=1;i<=b;i++)
{
    if (a%i==0 && b%i==0)
        c=i;
}
a/=c;
b/=c;
printf("lcm of %d and %d is %d",a*c,b*c,a*b*c);
return 0;}