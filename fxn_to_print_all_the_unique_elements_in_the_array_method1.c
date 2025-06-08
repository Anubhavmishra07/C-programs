#include <stdio.h>
void unique_elements(int a[], int);
int main()
{
    int n;
    printf("enter the size of array ");
    scanf("%d", &n);
    int a[n];
    printf("enter the values ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    unique_elements(a, n);
    return 0;
}
void unique_elements(int a[], int n)
{
    int c;
    printf("unique elements in the array are ");
    for (int i = 0; i < n; i++)
    {
        c = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                c++;
        }
        if (c == 0)
        {
            for (int j = 0; j < i; j++)
                if (a[i] == a[j])
                    c--;
        }
        if (c == 0)
            printf("%d ", a[i]);
    }
}