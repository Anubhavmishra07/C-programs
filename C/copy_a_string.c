#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
   printf("enter the string within a limit of 10000 characters\n");
   fgets(a,sizeof(a),stdin);
   a[strcspn(a, "\n")] = '\0';
   char b[strlen(a)+1];
   int i;
    for (i=0;a[i];i++)
    {  b[i]=a[i];
     }
     b[i]='\0';
     printf("copied string : %s\n",b);
     return 0;
}