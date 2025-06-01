#include <stdio.h>
int main()
{
    int a[10], g;
    printf("enter 10 nos ");
    for (int i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    g = a[0];
    for (int i = 1; i <= 9; i++)
        if (g > a[i])
            g = a[i];
    printf("the smallest no is = %d", g);
    return 0;
}