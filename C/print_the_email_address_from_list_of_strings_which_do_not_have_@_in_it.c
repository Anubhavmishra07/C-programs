#include <stdio.h>
#include <string.h>
void searchmail(char a[][100], int);
int main()
{
    printf("enter the no of email addresses you want to enter:");
    int n;
    scanf("%d", &n);
    fflush(stdin);
    char a[n][100];
    printf("enter the %d email addresses :", n);
    for (int i = 0; i < n; i++)
    {
        fgets(a[i], sizeof(a[0]), stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
    searchmail(a, n);
    return 0;
}
void searchmail(char a[][100], int n)
{
    int c = 0;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (!strchr(a[i], '@'))
        {
            if (!c)
                printf("odd emails are:\n");
            printf("%s\n", a[i]);
            c++;
        }
    }
    if (!c)
    printf("all emails have @");
}
