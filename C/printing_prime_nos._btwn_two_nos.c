#include<stdio.h>
#include<stdlib.h>
void f1(int,int);
int main()
{ int a,b;
    printf("enter two numbers btwn whom prime nos are to be printed ");
    scanf("%d %d",&a,&b);
    f1(a,b);
    return 0;
}
void f1(int a, int b)
{   int n=a;
    int c=0;
    while (1)
   {  if (a>n)
    { for (int i=1 ;i<=a; i++)
    {   if (a%i==0)
        c++;}}
        if (c==2)
        printf("%d ",a);
        c=0;
        a++;
        if (a>=b)
        exit(0);
    }    
}