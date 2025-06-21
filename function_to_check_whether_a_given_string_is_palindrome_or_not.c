#include <stdio.h>
#include <ctype.h>
#include <string.h>
int palindrome(char a[]);
int main()
{
  char a[10001];
  printf("enter the string within a limit of 10000 characters\n");
  fgets(a, sizeof(a), stdin);
  a[strcspn(a, "\n")] = '\0';
  if (palindrome(a))
    printf("the string is a palindrome");
  else
    printf("the string is not a palindrome");
  return 0;
}
int palindrome(char a[])
{
  int left = 0, right = strlen(a) - 1;
  while (left < right)
  {
    while (left < right && !isalnum(a[left]))
    {
      left++;
      // if (left == right) don't need this bcoz every time the compiler will have to check for this
      //   return 1; also if this the case then the program will end anyway in the next iteration
    }
    while (right > left && !isalnum(a[right]))
      right--;
    if (tolower(a[left]) != tolower(a[right]))
      return 0;
    left++;
    right--;
  }
  return 1;
}