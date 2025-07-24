#include<stdio.h>
int main()
{
    int a[10],e=0,o=0;
     printf("enter 10 nos ");
   for (int i=0;i<=9;i++)
    {scanf("%d",&a[i]);
      if(a[i]%2==0)
    e+=a[i];
    if(a[i]%2!=0)
    o+=a[i];
  }
    printf("sum of even nos = %d\n",e);
    printf("sum of odd nos = %d",o);
return 0; 
}