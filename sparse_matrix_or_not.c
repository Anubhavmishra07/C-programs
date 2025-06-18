#include <stdio.h>
void sparse(int, int c, int a[][c]);
int main()
{

    int r, c;
    printf("enter the no. of rows r  : ");
    scanf("%d", &r);
    printf("enter the no. of columns c : ");
    scanf("%d", &c);
    printf("enter the values of the matrix : ");
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    sparse(r, c, a);
    return 0;
}
void sparse(int r, int c, int a[][c])
{
    int s = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
                s++;
        }
    }
    if (s > (r * c)/2)
        printf("it is a sparse matrix");
    else
        printf("not a sparse matrix");
}