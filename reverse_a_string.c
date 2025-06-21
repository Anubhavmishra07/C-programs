#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    char t;
   printf("enter the string within a limit of 10000 characters\n");
   fgets(a,sizeof(a),stdin);
   a[strcspn(a, "\n")] = '\0';
   int i=strlen(a);
    for (int j=0;j<=(i-1)/2 && a[j];j++)
    {   t=a[j];
         a[j]=a[i-1-j];
         a[i-1-j]=t;
        }
     printf("the reversed string is: %s",a);
     return 0;
}