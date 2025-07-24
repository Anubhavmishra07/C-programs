#include <stdio.h>
int main()
{
    char a[10001];
   printf("enter the string within a limit of 10000 characters\n");
   fgets(a,sizeof(a),stdin);
    for (int i=0;a[i];i++)
    {if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 32 ;}
     printf("the given string in uppercase is: %s",a);
     return 0;
}