#include <stdio.h>
void transpose(int , int c, int a[][c]);
int main()
{

    int r, c;
    printf("enter the no. of rows r  : ");
    scanf("%d", &r);
    printf("enter the no. of columns c : ");
    scanf("%d", &c);
    printf("enter the values of second array : ");
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    transpose(r, c, a);
    return 0;
}
void transpose(int r, int c, int a[][c])
{
    int t[c][r];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            t[j][i] = a[i][j];
    }

    printf("transpose :\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
}