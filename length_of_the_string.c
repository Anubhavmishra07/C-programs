#include <stdio.h>
int main()
{
    char a[10001];
   printf("enter the string within a limit of 10000 characters");
   fgets(a,10001,stdin);
   int i;
    for (i=0;a[i];i++)
    {if (a[i]=='\n')
    break;}
     printf("length of the string is %d",i);
     return 0;
}