#include <stdio.h>
int sumofdigits(int);
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    printf("sum = %d" ,sumofdigits(n));
    sumofdigits(n);
}
int sumofdigits(int n)
{  
   
    if (n==0)
   return 0;
   return sumofdigits(n/10)+n%10;
}


