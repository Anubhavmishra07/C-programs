#include <stdio.h>
int f1(int);
int main()
{
    int n;
    printf("enter a no. ");
    scanf("%d", &n);
   printf("the no. of digits present = %d",f1(n));
   
}

int f1(int n)
{
    if (n/10==0)
    return 1;
  return f1(n/10)+1;
}
