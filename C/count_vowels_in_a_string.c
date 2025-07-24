#include <stdio.h>
int main()
{
    char a[10001];
   printf("enter the string within a limit of 10000 characters\n");
   fgets(a,sizeof(a),stdin);
   int c=0;
    for (int i=0;a[i];i++)
    {if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
    a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')

    c++;}
     printf("no of vowels is %d",c);
     return 0;
}