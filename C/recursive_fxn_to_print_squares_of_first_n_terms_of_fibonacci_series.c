#include <stdio.h>
void f1(int);
int main()
{
    int n;
    printf("enter a no. ");
    scanf("%d", &n);
  f1(n);
   
}

void f1(int n)
{
    
  if (n==1 )
  {printf("0 ");  
    }
        
else if (n==2)
{printf("0 1 ");
}    
  else 
       {f1(n-1);   
       printf("%d ",);    }
}
