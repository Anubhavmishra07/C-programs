#include <stdio.h>
#include <string.h>
void sort(int *p, int n);
int main()
{
    int n;
    printf("enter the no. of values you want to enter\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the values\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    printf("sorted values:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
void sort(int *p, int n)
{
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i] > p[j])

            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }
}
