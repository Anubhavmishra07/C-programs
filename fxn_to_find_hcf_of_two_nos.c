#include<stdio.h>
int f1(int,int);
int main()
{ int a,b;
    printf("enter two numbers whose hcf is to be found");
    scanf("%d %d",&a,&b);
    printf("hcf = %d",f1(a,b));
    return 0;
}
int f1(int a, int b)
{   int c;
    if (a<=b)
   { for (int i=1 ; i<=a ; i++)
    {  
       if ( a%i==0 && b%i==0 ) 
       c=i;
    }
     return c;}
     else                              // for b > a entered by the user
   { for (int i=1 ; i<=b ; i++)
    {  
       if ( a%i==0 && b%i==0 ) 
       c=i;
    }
     return c;}

}