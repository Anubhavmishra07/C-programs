#include<stdio.h>
int main()
{int i,n,c=0;
printf("enter a no.\n");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
    if (n%i==0)
        c++;
}
if (c==2 )
printf("no is prime");
else 
printf("not a prime");

return 0;}