#include <stdio.h>
void sumrightdia(int n, int a[][n]);
int main()
{
    int n;
    printf("enter the no. of rows or columns : ");
    scanf("%d", &n);
    int a[n][n];
    printf("enter the values of the matrix : ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    sumrightdia(n, a);
    return 0;
}
void sumrightdia(int n, int a[][n])
{
    int s = 0;
    for (int i = 0; i < n; i++)

        s += a[i][n - 1 - i];

    printf("sum of right diagonals = %d", s);
}