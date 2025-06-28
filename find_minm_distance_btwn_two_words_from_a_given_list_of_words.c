#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int mindis(int n, char a[][100], char b[], char c[]);
int main()
{
    printf("enter the no of words you want to enter:");
    int n;
    scanf("%d", &n);
    fflush(stdin);
    char a[n][100];
    printf("enter the %d words :\n", n);
    for (int i = 0; i < n; i++)
    {
        fgets(a[i], sizeof(a[0]), stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
    printf("enter the two words whose minm distance is to found :\n");
    char word1[100], word2[100];
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = '\0';
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0';
    mindis(n, a, word1, word2);
    return 0;
}
int mindis(int n, char a[][100], char b[], char c[])
{
    int index1 = -1, index2 = -1, d = n;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i], b) == 0)
            index1 = i;
        if (strcmp(a[i], c) == 0)
            index2 = i;
        if (index1 != -1 && index2 != -1 && abs(index2 - index1) < d)
            d = abs(index2 - index1);
    }
    if (index1 == -1 || index2 == -1)
    {
        printf("please enter valid words");
        exit(0);
    }
    else
        printf("minm distance btwn the words is %d", d);
}