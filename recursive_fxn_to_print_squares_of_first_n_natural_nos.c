#include <stdio.h>
void f1(int);
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    f1(n);
}
void f1(int n)
{if (n==1)
    printf("1 ");
else 
    {  
        f1(n-1);
         printf("%d ",n*n); 
    }
}
