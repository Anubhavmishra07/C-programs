#include <stdio.h>
void max1row(int, int c, int a[][c]);
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
    max1row(r, c, a);
    return 0;
}
void max1row(int r, int c, int a[][c])
{
    int b[r], g;
       
    for (int i = 0; i < r; i++)
    {       b[i] = 0;
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 1)
                b[i]++;
        }
    }
   
    g = b[0];
    for (int i = 1; i < r; i++)
    {
        if (g < b[i])
            g = b[i];
    }
    if (g)
    {
        printf("maximum no. of 1s are present in :\n");
        for (int i = 0; i < r; i++)
        {
            if (b[i] == g)
            {
                printf("row %d\n", i + 1);
            }
        }
    }
    else
        printf("no 1s found in any row");
}