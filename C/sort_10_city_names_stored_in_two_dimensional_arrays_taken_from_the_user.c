#include <stdio.h>
#include <string.h>
#include <ctype.h>
void sortedcities(char a[][101]);
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
    int t;
    for (int i = 0; i < 9; i++) // i<9 due to i+1 used
    {
        for (int z = i + 1; z < 10; z++)
        {
            for (int j = 0; j < 101; j++)
            {
                if (tolower(a[i][j]) < tolower(a[z][j]))
                    break;
                else if (tolower(a[i][j]) > tolower(a[z][j]))
                {

                    for (int k = 0; k < 101; k++)

                    {
                        t = a[i][k];
                        a[i][k] = a[z][k];
                        a[z][k] = t;
                    }
                    break;
                }
            }
        }
    }
}
