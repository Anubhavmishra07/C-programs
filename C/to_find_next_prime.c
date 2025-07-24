#include<stdio.h>
int main()
{int i,a=1,b,c=0;
printf("enter a no.\n");
scanf("%d",&b);
while (1)
{for (i=1;i<=a && a>b ;i++)
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