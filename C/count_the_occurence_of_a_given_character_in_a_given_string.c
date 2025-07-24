#include <stdio.h>
int main()
{
    char a[10001];
   printf("enter the string within a limit of 10000 words");
   fgets(a,10001,stdin);
   printf("enter the character whose freqency is to be found ");
   char b;
   fflush(stdin);
   scanf("%c",&b);
   int c=0;
    for (int i=0;a[i];i++)
    {if (a[i]==b)
    c++;}
     printf("frequency of %c is %d",b,c);
     return 0;
}