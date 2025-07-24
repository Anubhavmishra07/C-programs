#include <stdio.h>
void merged_array(int a[], int b[], int);
int main()
{
    int n;
    printf("enter the size of the arrays ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("enter the values of first array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter the values of second array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    merged_array(a, b, n);
    return 0;}

    void merged_array(int a[], int b[], int n)
    {
        int c[2*n], t;

        for (int i = 0; i < n; i++)
        {
                c[i] = a[i];
                c[n+i] = b[i];
        }

        for (int i = 0; i < 2 * n - 1; i++)
        {
            for (int j = i + 1; j < 2 * n ; j++)
            {
                if (c[i] < c[j])
                {
                    t = c[i];
                    c[i] = c[j];
                    c[j] = t;
                }
            }
        }
        printf("merged and sorted array ");
        for (int i = 0; i < 2 * n; i++)
            printf("%d ",c[i]);
    }