#include <stdio.h>
int main()
{
    int n, g, s;
    printf("enter the size of an array ");
    scanf("%d", &n);
    int a[n];
    printf("enter the values : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    g = a[0];
    for (int i = 1; i < n; i++)
    {
        if (g < a[i])
            g = a[i];}
        for (int i = 0; i < n; i++)
        {
            if (a[i] != g)
                s = a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] != g && s < a[i])
                s = a[i];
        }
        printf("the second largest no is = %d", s);
        return 0;
    }