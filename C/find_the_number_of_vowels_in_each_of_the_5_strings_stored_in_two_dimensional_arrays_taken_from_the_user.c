#include <stdio.h>
#include <string.h>
int countvowels(char a[]);
int main()
{
    char a[5][10001];
    printf("enter the strings within a limit of 10000 characters\n");
    for (int i = 0; i < 5; i++)
    {
        printf("enter string %d:\n", i + 1);
        fgets(a[i], sizeof(a[0]), stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
    for (int i = 0; i < 5; i++)
        printf("no of vowels in string %d is %d\n", i + 1, countvowels(a[i]));

    return 0;
}
int countvowels(char a[])
{
    int c = 0;
    for (int i = 0; a[i]; i++)
    {
        if (strchr("aeiouAEIOU", a[i]))
            c++;
    }
    return c;
}