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
    int s[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            s[i][j] = a[i][j] + b[i][j];
    }
    printf("sum :\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", s[i][j]);
        printf("\n");
    }
}