#include <stdio.h>
#include <string.h>
void sort(int *p, int n);
int main()
{
    int n;
    printf("enter the no. of values you want to enter\n");
    scanf("%d", &n);
    fflush(stdin);
    int a[n];
    printf("enter the values\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    printf("sorted values:\n");
    for (int i = 0; i < n; i++)
    printf("%d", &a[i]);
    return 0;
}
void sort(int *p, int n)
{
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
}