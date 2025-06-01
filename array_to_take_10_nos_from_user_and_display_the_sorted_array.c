#include <stdio.h>
int main()
{
    int a[10];
    printf("enter 10 nos ");
    for (int i = 0; i <= 9; i++)
        scanf("%d", &a[i]);-
      a:
    {for (int i = 0; i <= 9; i++)
       { if (a[i] > a[i+1])
           
       { a[i] = a[i]+a[i+1];
        a[i+1]=a[i]-a[i+1];
        a[i]=a[i]-a[i+1] ;}
        }}
        for (int i = 0; i <= 9; i++)
        if (a[i] > a[i+1])
        goto a;
        printf("sorted array: ");
        for (int i = 0; i <= 9; i++)
    printf("%d ", a[i]);
    return 0;
}