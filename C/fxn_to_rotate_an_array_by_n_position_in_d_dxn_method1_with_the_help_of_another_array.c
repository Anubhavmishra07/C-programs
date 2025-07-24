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
    int n, d, b[x];
    printf("enter the value of n : ");
    scanf("%d", &n);
    n %= x;
    printf("enter the value of d as 1 for right and 2 for left : ");
    scanf("%d", &d);

    if (d == 1)
    {
        for (int i = 0; i < x; i++)
            if (i < n)
                b[i] = a[x - n + i];
            else
                b[i] = a[i - n];
    }
    if (d == 2)
    {
        for (int i = 0; i < x; i++)
            if (i < x - n)
                b[i] = a[n + i];
            else
                b[i] = a[i + n - x];
    }
    for (int i = 0; i < x; i++)
        a[i] = b[i];
}