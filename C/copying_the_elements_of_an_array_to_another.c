#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of an array ");
    scanf("%d", &n);
    int a[n], c[n];
    printf("enter the values : ");
    for (int i = 0; i < n; i++)
       { scanf("%d", &a[i]);
        c[i]=a[i];}
    printf("the copied array = ");
    for (int i = 0; i < n; i++)
        printf("%d ", c[i]);

    return 0;
}