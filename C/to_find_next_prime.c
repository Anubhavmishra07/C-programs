#include<stdio.h>
int main()
{int i,a,b,c=0;
printf("enter a no.\n");
scanf("%d",&b);
a=b+1;
while (1)
{for (i=1;i<=a;i++)
{
    if (a%i==0)
        c++;
}
if (c==2 )
{
    printf("next prime is %d ",a);
    break;
}
c=0;
a++;
}
return 0;
}