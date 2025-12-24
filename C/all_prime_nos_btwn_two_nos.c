#include <stdio.h>
int main()
{
  int i, a, b, c = 0, n;
  printf("enter two nos.\n");
  scanf("%d%d", &a, &b);
  n = a + 1;
  while (1)
  {
    for (i = 1; i <= n; i++)
    {
      if (n % i == 0)
        c++;
    }
    if (c == 2)
    {
      printf("%d ", n);
    }
    c = 0;
    n++;
    if (n >= b)
      break;
  }
  return 0;
}