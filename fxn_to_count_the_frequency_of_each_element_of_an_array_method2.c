#include <stdio.h>
#include <stdlib.h>
void frequency(int a[], int);
int main()
{
    int n;
    printf("enter the size of the arrays ");
    scanf("%d", &n);
    int a[n];
    printf("enter the values : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    frequency(a, n);
    return 0;
}

void frequency(int a[], int n)
{
    int g = a[0];

    for (int i = 1; i < n; i++)
    {
        if (g < abs(a[i]))
            g = abs(a[i]);
    }
    int b[2 * (g + 1)];
    for (int i = 0; i < 2 * (g + 1); i++)
        b[i] = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
            b[-a[i] + g] += 1;
        else
            b[a[i]] += 1;
    for (int i = 0; i < 2 * (g + 1); i++)
    {
        if (b[i])
           { if ( i <= g)
            printf("the frequency of %d is %d\n", i, b[i]);
            else
            printf("the frequency of %d is %d\n", -i+g, b[i]);}
    }
}