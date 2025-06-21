#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    char t;
    printf("enter the string within a limit of 10000 characters\n");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    for (int i = 0; a[i]; i++)
    {
        for (int j = i + 1; a[j]; j++)
        {
            if (a[i] > a[j])
            {
                 t=a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("sorted string :%s\n", a);
    return 0;
}