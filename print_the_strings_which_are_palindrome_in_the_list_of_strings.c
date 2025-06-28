#include <stdio.h>
#include <string.h>
#include <ctype.h>
int palindrome(char a[]);
int main()
{
    printf("enter the no of strings you want to enter:");
    int n;
    scanf("%d", &n);
    fflush(stdin);
    char a[n][100];
    printf("enter %d strings :", n);
    for (int i = 0; i < n; i++)
    {
        fgets(a[i], sizeof(a[0]), stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
    printf("palindromes present in the list are :\n");
    for (int i = 0; i < n; i++)
    {
        if (palindrome(a[i]))
            printf("%s\n", a[i]);
    }
    return 0;
}
int palindrome(char a[])
{
    int left = 0, right = strlen(a) - 1;
    while (left < right)
    {
        while (left < right && !isalnum(a[left]))
        {
            left++;
        }
        while (right > left && !isalnum(a[right]))
            right--;
        if (tolower(a[left]) != tolower(a[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}