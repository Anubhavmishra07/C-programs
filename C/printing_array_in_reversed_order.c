#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of an array ");
    scanf("%d", &n);
    int a[n];
    printf("enter the values : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("the reversed array = ");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}