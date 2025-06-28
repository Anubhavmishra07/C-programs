#include <stdio.h>
#include <string.h>
void search(char a[][10001], int n, char b[]);
int main()
{
    printf("enter the no of strings you want to enter:");
    int n;
    scanf("%d", &n);
    fflush(stdin);
    char a[n][10001];
    printf("enter the n strings not longer than 10000 characters :\n");
    for (int i = 0; i < n; i++)
    {
        fgets(a[i], sizeof(a[0]), stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
    printf("enter the string you want to find:");
    char b[10001];
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';
    search(a, n, b);

    return 0;
}
void search(char a[][10001], int n, char b[])
{
    int c = 0;
    int i = 0;
    while (i < n)
    {
        if (strcmp(a[i], b) == 0)
        {
            if (c == 0)
                printf("string found at index ");
            else
                printf(",");
            printf("%d", i + 1);
            c++;
        }
        i++;
    }
    if (c == 0)
        printf("no such string found");
}
