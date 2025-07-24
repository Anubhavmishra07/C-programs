#include <stdio.h>
#include <string.h>
int duplicatergst(char u[][100], char p[][100], int);
int login(char u[][100], char p[][100], int);
int main()
{
    int c = 0;
    char u[10][100] = {0}, p[10][100] = {0};
    while (1)
    {
        printf("1. Register\n2. Login\n3. Exit\nenter your choice : ");
        int x;
        scanf("%d", &x);
        fflush(stdin);
        if (x == 3)
        {
            printf("good bye and a have nice day");
            break;
        }
        else if (x == 1)
        {
            if (duplicatergst(u, p, c)) // for checking duplicate registrations

                c++;
        }
        else if (x == 2)
            login(u, p, c);
        else
            printf("invalid input pls try again\n");
        if (c == 10)
        {
            printf("maxm trial exhausted - bye\n");
            break;
        }
    }
    return 0;
}
int duplicatergst(char u[][100], char p[][100], int c)
{
    char dup[2][100];
    printf("enter new username :\n");
    fgets(dup[0], sizeof(dup[0]), stdin);
    dup[0][strcspn(dup[0], "\n")] = '\0';
    printf("enter new password :\n");
    fgets(dup[1], sizeof(dup[0]), stdin);
    dup[1][strcspn(dup[1], "\n")] = '\0';
    int i;
    for (i = 0; i < c; i++)
    {
        if (strcmp(dup[0], u[i]) == 0)
        {
            printf("user already registered\n");
            return 0;
        }
    }
    if (i == c)
    {
        strcpy(u[c], dup[0]);
        strcpy(p[c], dup[1]);

        printf("registration successful\n");
    }
    return 1;
}
int login(char u[][100], char p[][100], int c)
{
    char l[2][100];
    printf("enter your username :\n");
    fgets(l[0], sizeof(l[0]), stdin);
    l[0][strcspn(l[0], "\n")] = '\0';
    printf("enter your password :\n");
    fgets(l[1], sizeof(l[0]), stdin);
    l[1][strcspn(l[1], "\n")] = '\0';
    int i;
    for (i = 0; i < c; i++)
    {
        if (strcmp(l[0], u[i]) == 0 && strcmp(l[1], p[i]) == 0)
        {
            printf("login successful\n");
            break;
        }
    }
    if (i == c)
        printf("invalid username or password\n");
    return 0;
}
