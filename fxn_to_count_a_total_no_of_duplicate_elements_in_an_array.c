#include <stdio.h>

int totalDuplicates(int a[], int n);

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Total number of duplicate elements: %d\n", totalDuplicates(a, n));
    return 0;
}

int totalDuplicates(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break; // Count only once for this value
            }
        }
    }
    return count;
}

