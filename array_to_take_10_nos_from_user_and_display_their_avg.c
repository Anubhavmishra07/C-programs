#include<stdio.h>
int main()
{
    int a[10],s=0;
     printf("enter 10 nos ");
   for (int i=0;i<=9;i++)
    {scanf("%d",&a[i]);
    s+=a[i];}
    printf("avg = %f",s/10.0);
return 0; 
}