#include <stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    reverse(n);
}
void reverse(int n)
{  
   
    if (n/10==0)
   printf("%d",n);
    else 
    {printf("%d",n%10);
   reverse(n/10);}
}


