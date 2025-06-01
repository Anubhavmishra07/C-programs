#include <stdio.h>
int main()
{
    int a[10];
    printf("enter 10 nos ");
    for (int i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i <= 9; i++)
    {
        for (int j = i+1; j <= 9; j++)
        {
            if (a[i] > a[j]) 

            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }

    printf("sorted array: ");
    for (int i = 0; i <= 9; i++)
        printf("%d ", a[i]);
    return 0;
}