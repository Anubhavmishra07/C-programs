#include<stdio.h>
int f1(int,int);
int main()
{int x,n,r;
printf("enter number and digit to be checked\n");
scanf("%d%d",&n,&r);
x=f1(n,r);
if (x==1)
printf("yes digit is present");
else 
printf("no digit is not present");
return 0;}
int f1(int n,int r)
{ int x,c=0;
    while (n!=0)
    {  x=n%10;
         if (x==r)
        { return 1;}

 n/=10;
}
return 0;}
