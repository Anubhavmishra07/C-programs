#include <stdio.h>
#include <string.h>
void sortedcities(char a[][101]);
void swap(char a[], char b[]);
int main()
{
    char a[10][101];
    printf("enter the city names not longer than 100 characters\n");
    for (int i = 0; i < 10; i++)
    {
        printf("enter the name of city %d:\n", i + 1);
        fgets(a[i], sizeof(a[0]), stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
    sortedcities(a);
    printf("city names in sorted order :\n");
    for (int i = 0; i < 10; i++)
        printf("%s\n", a[i]);
    return 0;
}
void sortedcities(char a[][101])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)

        {
            if (strcasecmp(a[i], a[j]) > 0)
                swap(a[i], a[j]);
        }
    }
}
void swap(char a[], char b[])
{
    char t;

    for (int i = 0; i < 101; i++)

    {
        t = b[i];
        b[i] = a[i];
        a[i] = t;
    }
}
