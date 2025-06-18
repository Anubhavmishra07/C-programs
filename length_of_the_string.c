#include <stdio.h>
int main()
{
    char a[10000];
   printf("enter the string ");
   fgets(a,10000,stdin);
   int i;
    for (i=0;a[i];i++)
    {if (a[i]=='\n')
    break;}
     printf("length of the string is %d",i);
     return 0;
}