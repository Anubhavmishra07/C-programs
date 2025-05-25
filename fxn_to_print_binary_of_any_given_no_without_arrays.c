#include <stdio.h>
void binary(int);
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    binary(n);
}
void binary(int n)
{
    int b = 0, c = 0, d = 0, r = 0;

    while (n)
    {
        b = 10 * b + n % 2; // finding binary from lsb to msb
        c++;                // counting no. of digits in b
        n /= 2;
    }

    while (b)
    {
        r = (r * 10) + (b % 10); // reversing b to msb to lsb to get actual binary form
        b /= 10;
    }

    int p = r;
    while (r)
    {

        r /= 10;
        d++; // counting no. of digits in r
    }
    if (d == c)

        printf("%d", p); // when no digit is lost
    else
    {
        for (int i = 1; i <= (c - d); i++)

            p = p * 10; // appending any 0's in r if lost due to reversing of b

        printf("%d", p);
    }
}
