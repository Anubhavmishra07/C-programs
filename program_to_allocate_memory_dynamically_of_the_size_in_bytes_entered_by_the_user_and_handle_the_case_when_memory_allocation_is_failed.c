#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a = (int *)malloc(sizeof(int));
    printf("enter the size of the memory : ");
    scanf("%d",a);
    int*b=(int*)malloc(sizeof(*a));
    if (a==NULL)
    printf("memory allocation failed");
    else 
    printf("successfully alloted %d bytes of memory",*a);
    
}