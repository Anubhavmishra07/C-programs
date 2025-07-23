#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *input()
{
    char *p = (char *)malloc(10000);
    printf("enter the string: ");
    fgets(p, 10000, stdin);
    p[strcspn(p, "\n")] = 0;
    char *q = malloc(strlen(p) + 1);
    strcpy(q, p);
     free(p);
    return q;
}
int main()
{   char*r=input();
    printf("%s",r);
}