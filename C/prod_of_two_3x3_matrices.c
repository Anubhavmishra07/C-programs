#include <stdio.h>
void prod(int a[][3], int b[][3]);
int main()
{

    int a[3][3], b[3][3];
    printf("enter the values of first array : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    printf("enter the values of second array : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    }
    prod(a, b);
    return 0;
}

void prod(int a[][3], int b[][3])
{
    int p[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            p[i][j] = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
                p[i][j] += a[i][k] * b[k][j];
        }
    }
    printf("product :\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }
}