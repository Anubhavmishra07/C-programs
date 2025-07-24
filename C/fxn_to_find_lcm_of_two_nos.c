#include<stdio.h>
int f1(int,int);
int main()
{ int a,b;
    printf("enter two numbers whose lcm is to be found");
    scanf("%d %d",&a,&b);
    printf("lcm = %d",f1(a,b));
    return 0;
}
int f1(int a, int b)
{
    for (int i=1 ; i<=a*b ; i++)
    {  
       if (a<=b && i%a==0 && i%b==0 && i>=a)
       return i;
       if (i%a==0 && i%b==0 && i>=b)
       return i;
    }
}