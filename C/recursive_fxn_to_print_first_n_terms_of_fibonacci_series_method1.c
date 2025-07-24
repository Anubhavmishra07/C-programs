#include <stdio.h>
int f1(int);
int main()
{
    int n;
    printf("enter a no. ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", f1(i));
}

int f1(int n)
{

    if (n == 1 || n == 2)
        return n - 1;
    return f1(n - 2) + f1(n - 1);
}
