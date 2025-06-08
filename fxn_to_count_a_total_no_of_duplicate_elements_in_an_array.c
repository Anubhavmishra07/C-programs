#include <stdio.h>
int duples(int a[], int );
int main()
{
    int n;
    printf("enter the size of array ");
    scanf("%d", &n);
    int a[n];
    printf("enter the values ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
   printf("total no. of duplicate elements: %d",duples(a, n));
    return 0;
}
int duples(int a[], int n)
{ int c=0;
    for (int i=0;i<n-1;i++)
     {
        for (int j=i+1;j<n;j++)
        {if (a[i]==a[j])
        { for(int j=0;j<i;j++)
           { if (a[i]==a[j])
         c--;}
        c++;}}
     }
    return c;
}