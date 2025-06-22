#include <stdio.h>
#include <ctype.h>
#include <string.h>
int words(char a[]);
int main()
{
    char a[10001];
    printf("enter the string within a limit of 10000 characters\n");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("no of words = %d",words(a));
}
int words(char a[])
{
    int c = 0;
    for (int i = 0; a[i]; i++)
    {
        if (!isalnum(a[i]))
            continue;
        c++;
         while (isalnum(a[i]))
            i++;
    }
    return c;
}