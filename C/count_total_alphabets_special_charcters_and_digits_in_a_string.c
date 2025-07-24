#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
   printf("enter the string within a limit of 10000 characters\n");
   fgets(a,sizeof(a),stdin);
   a[strcspn(a, "\n")] = '\0';
   int b=0,c=0,d=0;
    for (int i=0;a[i];i++)
    {  if ((a[i]>='a' && a[i]<='z')   || (a[i]>='A' && a[i]<='Z'))
        b++;
        
        else if ((a[i]>='0' && a[i]<='9'))
        d++;
        else //if ((a[i]>=0 && a[i]<=47)   || (a[i]>=58 && a[i]<=64) || (a[i]>=91 && a[i]<=96) )
        c++;

     }
     printf("the total no. of alphabets are : %d\n",b);
      printf("the total no. of digits are : %d\n",d);
       printf("the total no. of special characters are : %d",c);
     return 0;
}