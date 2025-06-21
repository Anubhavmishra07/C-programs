#include <stdio.h>
#include <string.h>
int cmp(char a[], char b[]);
int main()
{
    char a[10001];
    char b[10001];
    printf("enter the first string within a limit of 10000 characters\n");
    fgets(a, sizeof(a), stdin);
    printf("enter the second string within a limit of 10000 characters\n");
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    if (cmp(a, b) == -1)
        printf("%s occurs before %s", a, b);
    else if (cmp(a, b) == 0)
        printf("both strings are equal");
    else
        printf("%s occurs after %s", a, b);
    return 0;
}
int cmp(char a[], char b[])
{ int i;
    for (i = 0; a[i] || b[i]; i++)
    {
        if (a[i] < b[i])
            return -1;
        else if (a[i] > b[i])
            return 1;  
    }
    return 0; 
}