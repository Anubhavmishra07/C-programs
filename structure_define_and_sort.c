#include <stdio.h>
#include <string.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    struct book x;
    strcpy(x.title, "anubhav");
    input();
    printf("%s", x.title);
    return 0;
}