#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, g, s,c=1;
    printf("enter the size of an array ");
    scanf("%d", &n);
      if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        exit(0);
    }
    int a[n];
    printf("enter the values : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
        for (int i = 0; i < n-1; i++)
   {if (a[i] == a[i+1])
       c++;}
        if (c==n)
        {printf("no second largest value found");
            exit(0);
        }
    g = a[0];
    for (int i = 1; i < n; i++)
    {
        if (g > a[i])
            g = a[i];}
        for (int i = 0; i < n; i++)
        {
            if (a[i] != g)
            { s = a[i];
                break;}
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] != g && s > a[i])
                s = a[i];
        }
        printf("the second smallest no is = %d", s);
        return 0;
    }