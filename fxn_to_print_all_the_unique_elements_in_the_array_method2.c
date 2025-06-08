#include <stdio.h>

void unique_elements(int a[], int n)
{
    printf("Unique elements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && a[i] == a[j])
            {
                c = 1;
                break;
            }
        }

        if (c==0)
            printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the values: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    unique_elements(a, n);

    return 0;
}
