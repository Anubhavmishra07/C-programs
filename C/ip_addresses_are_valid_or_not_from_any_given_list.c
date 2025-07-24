#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ip_add(char a[]);
int countdigits(int);
int main()
{
    printf("enter the no of ip addresses you want to enter:");
    int n;
    scanf("%d", &n);
    fflush(stdin);
    char a[n][100];
    printf("enter the %d ip addresses :\n", n);
    for (int i = 0; i < n; i++)
    {
        fgets(a[i], sizeof(a[0]), stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
    printf("the invalid ip addresses are\n");
    for (int i = 0; i < n; i++)
    {
        if (!ip_add(a[i]))
            printf("%s\n", a[i]);
    }
    return 0;
}
int ip_add(char a[])
{
    int left = 0, s = 0, c = 0, l = 0, count = 0;
    while (c < 4)
    {
        while (isdigit(a[left]))
        { if (left>l+2)
            return 0;
            s = s * 10 + (a[left] - '0');
            count++;
            left++;
        }
        if (countdigits(s) != count || s < 0 || s > 255) // checking for leading zeroes and limit of nos upto 255
            return 0;
        if (c == 3 && a[left]==0) //checking that after 4th sequence of nos. the string terminates
           break;
        else if (c==3) // if string does not end then invalid ip address
            return 0;
        if (a[left] == '.')
            c++;
        else
            return 0;
        l= ++left;
        s = 0;
        count = 0;
    }
    return 1;
}
int countdigits(int n)
{
    if (n / 10 == 0)
        return 1;
    return countdigits(n / 10) + 1;
}