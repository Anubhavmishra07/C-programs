#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    printf("sum = %d" ,sum(n));
    sum(n);
}
int sum(int n)
{  
   
    if (n==1)
   return 1;
   return sum(n-1)+n;
}


