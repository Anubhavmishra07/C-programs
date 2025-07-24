#include<stdio.h>
void f1(int);
int main()
{int x,n;
printf("enter a number\n");
scanf("%d",&n);
f1(n);
return 0;}

void f1(int n)
{int c=1;
    for( int i=2;i<=n;i++)
   { while (n%i==0)

   { n/=i; 
    printf("%d",i);
        if (n!=1)
        printf(",");}
    }}
         
    
