#include <stdio.h>
#include <ctype.h>
int alphastr(char a[]);
int main()
{
    char a[10001];
    printf("enter the string within a limit of 10000 characters\n");
    fgets(a, sizeof(a), stdin);
    alphastr(a);
    return 0;
}
int alphastr(char a[])
{ int c=0,d=0;
    for (int i = 0; a[i]; i++)
    {
        if (isalpha(a[i]))
          c++;   
        else if (isdigit(a[i]))
            d++;
         if (c>=1 && d>=1)
           { printf("the string is alphanumeric");
            return 0;}
    }
    printf("the string is not alphanumeric");
    return 0; 
}