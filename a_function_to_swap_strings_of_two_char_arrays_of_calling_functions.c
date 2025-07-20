#include <stdio.h>
#include <string.h>
void swapstr(char*, char*);
int main()
{
    char a[10000], b[10000];
    printf("enter the value of first string\n");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0;
    fflush(stdin);
    printf("enter the value of second string\n");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = 0;
    swapstr(a,b);
    printf("after swapping\nfirst string becomes %s and second string becomes %s", a, b);
    return 0;
}
void swapstr(char *p, char *q)
{
    char t[10000];
    strcpy(t,p);
    strcpy(p,q);
    strcpy(q,t);
}