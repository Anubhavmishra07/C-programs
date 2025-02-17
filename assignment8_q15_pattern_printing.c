#include<stdio.h>
int main()
{int i,j,k;
for (i=1;i<=4 ;i++)
{k=1;
    for (j=1;j<=7 ;j++)
    {
        if (j<=5-i)
       { printf("%d",k);
        if (k==4 )
        continue;
        k++;}
        else if (j>=3+i) 
         {k--;
        printf("%d",k);
           }
        else 
        printf(" ");}

 printf("\n");
}
return 0;
}