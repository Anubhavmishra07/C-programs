#include <stdio.h>
int f1(int,int,int);
//int  n;
int main()
{
    int a,b;
    printf("enter two nos. whose HCF is to be calculated: ");
    scanf("%d %d", &a,&b);
    n=a;
    printf("HCF = %d",f1(a,b,c));
   
}

int f1(int a,int b,int n)
{
    
  if (a%n==0 && b%n==0)
    {   return n;
        }
   n--;
       f1(a,b,n);        
}
