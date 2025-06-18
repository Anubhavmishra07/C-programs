#include <stdio.h>
void lowertriangular(int n, int a[][n]);
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
    lowertriangular(n, a);
    return 0;
}
void lowertriangular(int n, int a[][n])
{  printf("the lower triangular matrix is : \n" );
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
                printf("%2d ",0);     // to ensure 0 is also 2 space wide
            else
                printf("%2d ", a[i][j]);
        
        }

        printf("\n");
    }
}