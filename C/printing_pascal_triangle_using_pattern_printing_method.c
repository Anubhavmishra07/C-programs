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
  for (int i = 1; i <= n; i++)
  {
    int r = 0;
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      if ((n + 1 - i) % 2 == 0)
      {
        if (j >= n + 1 - i && j <= n - 1 + i && j % 2 == 0)
        {
          printf("%3d", ncr(i - 1, r));
          r++;
        }
        else
          printf("   ");
      }
      if ((n + 1 - i) % 2 != 0)
      {
        if (j >= n + 1 - i && j <= n - 1 + i && j % 2 != 0)
        {
          printf("%3d", ncr(i - 1, r));
          r++;
        }
        else
          printf("   ");
      }
    }
    printf("\n");
  }
}

int factorial(int n)
{
  if (n == 1 || n == 0)
    return 1;
  int f = 1;
  for (int i = 1; i <= n; i++)
    f = f * i;
  return f;
}

int ncr(int n, int r)
{
  return (factorial(n) / (factorial(n - r) * factorial(r)));
}