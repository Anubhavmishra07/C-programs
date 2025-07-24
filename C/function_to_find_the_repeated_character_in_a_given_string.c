#include <stdio.h>
#include <string.h>
#include <ctype.h>
void repeatedchrs(char a[]);
int main()
{
    char a[10001];
    printf("enter the string within a limit of 10000 characters\n");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    repeatedchrs(a);
    return 0;
}
void repeatedchrs(char a[])
{
    int b[256] = {0};
    int c = 1;  // for using commas
    printf("repeated characters are :\n");
    for (int i = 0; a[i]; i++)
    {
        b[tolower(a[i])]++;
        if (b[tolower(a[i])] == 2)
        {
            if (!c)
                printf(",");
            printf("'%c'", tolower(a[i]));
            c=0;
        }
    }
}
  
