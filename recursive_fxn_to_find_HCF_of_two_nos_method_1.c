#include <stdio.h>
int f1(int, int);
int main()
{
    int a, b;
    printf("enter two nos. whose HCF is to be calculated: ");
    scanf("%d %d", &a, &b);
    printf("HCF = %d", f1(a, b));
    
}

int f1(int a, int b)
{
    if (a >= b)
    {
        if (a % b == 0)
            return b;

        f1(a % b, b);
    }
    else
    {
        if (b % a == 0)
            return a;

        f1(a, b % a);
    }
}
