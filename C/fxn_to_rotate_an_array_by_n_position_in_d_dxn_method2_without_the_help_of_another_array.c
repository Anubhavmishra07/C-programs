#include <stdio.h>
void sort(int a[], int);
int main()
{
    int x;
    printf("enter the size of array ");
    scanf("%d", &x);
    int a[x];
    printf("enter the values ");
    for (int i = 0; i < x; i++)
        scanf("%d", &a[i]);
    sort(a, x);
    for (int i = 0; i < x; i++)
        printf("%d ", a[i]);
    return 0;
}
void sort(int a[], int x)
{
    int n, d, t;
    printf("enter the value of n : ");
    scanf("%d", &n);
    n %= x;
    printf("enter the value of d as 1 for right and 2 for left : ");
    scanf("%d", &d);

    if (d == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            t = a[x - 1];
            for (int i = x - 1; i > 0; i--)
                a[i] = a[i - 1];
            a[0] = t;
        }
    }
    if (d == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            t = a[0];
            for (int i = 0; i < x - 1; i++)
                a[i] = a[i + 1];
            a[x - 1] = t;
        }
    }
}