#include <stdio.h>
void binary(int);
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    binary(n);
}
void binary(int n)
{  
   
    if (n==0 || n==1)
   printf("%d",n);
    else 
    {
   binary(n/2);
    printf("%d",n%2);}
}


