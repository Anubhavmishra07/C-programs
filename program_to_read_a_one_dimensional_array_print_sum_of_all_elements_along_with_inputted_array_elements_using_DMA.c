#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sum(int *p, int n)
{
    int *s = (int *)calloc(1, 4);
    for (int i = 0; i < n; i++)
        *s += p[i];
    printf("\nsum of all elements = %d", *s);
}
int* input(int n)
{
    int *p = (int *)calloc(n, sizeof(int));
    printf("enter the elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("you entered the following elements :\n");
    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);
    return p;
}
int main()
{
    int *a = (int *)malloc(4);
    printf("how many elements do you wish to enter ? : ");
    scanf("%d", a);
    int *r = input(*a);
    sum(r, *a);
    free(r);
}