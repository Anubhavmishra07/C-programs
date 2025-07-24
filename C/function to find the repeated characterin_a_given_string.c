#include <stdio.h>
#include <ctype.h>
#include <string.h>
int revwords(char a[]);
int main()
{
    char a[10001];
    printf("enter the string within a limit of 10000 characters\n");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    revwords(a);
}
int revwords(char a[])
{
    int x = strlen(a);
    int c = 0;
    int j;
    printf("the reversed string word wise is :");
    for (int i = x - 1; i >= 0; i--)
    {
        if (isspace(a[i]))
        {
            c++;
            continue;
        }
        while (c)
        {
            printf(" ");
            c--;
        }
        while (i >= 0 && !isspace(a[i]))
            i--;

        j = i;
        i++;
        while (i <= x - 1 && !isspace(a[i]))
        {
            printf("%c", a[i]);
            i++;
        }
        i = j;
        if(++j)
        printf(" ");
    
    }
}