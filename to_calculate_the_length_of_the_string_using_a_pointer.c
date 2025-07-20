#include <stdio.h>
#include <string.h>
int length(char *p);
int main()
{
    char a[10001];
    printf("enter the string within a limit of 10000 characters\n");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0;
    printf("length of the string = %d", length(a));
    return 0;
}
int length(char *p)
{
    int i;
    for (i = 0; p[i]; i++)
        ; // this is same as     for (i = 0; p[i]; i++);
    return i;
}
