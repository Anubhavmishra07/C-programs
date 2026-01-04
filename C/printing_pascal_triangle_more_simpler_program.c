
#include <stdio.h>
void pascal_triangle(int);
int factorial(int);
int ncr(int, int);
int main()
{
  int n, r;
  printf("enter the number of rows ");
  scanf("%d", &n);
  pascal_triangle(n);
  return 0;
}
void pascal_triangle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < n - 1 - i; k++)
      printf("   "); // increased spacing to three so that triangle formation remains structured
    int flag = 1;
    for (int j = 0; j <= i; j++)
    {

      if (flag)
      {
        printf("%3d", ncr(i, j));
        flag = 0;
      }
      if (flag == 0)
      {
        printf("   "); // increased spacing to three so that triangle formation remains structured
        flag = 1;
      }
    }
    printf("\n");
  }
}

int factorial(int n)
{
  if (n == 1 || n == 0)
    return 1;
  else
    return n * (factorial(n - 1));
}

int ncr(int n, int r)
{
  return factorial(n) / (factorial(n - r) * factorial(r));
}