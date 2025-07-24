#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    int b[256] = {0};
    printf("enter the string within a limit of 10000 characters\n");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    for (int i = 0; a[i]; i++)

        b[a[i]]++;

    for (int i = 0; i < 256; i++)
    {
        if (b[i])
            printf("frequency of '%c' is %d\n", i, b[i]);
    }
    return 0;
}