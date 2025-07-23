#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[100];
    float salary;
};
void input(struct Employee *p)
{
    printf("enter employee id: ");
    scanf("%d", &(p->id));
    fflush(stdin);
    printf("enter name of the employee: ");
    fgets(p->name, 100, stdin);
    p->name[strcspn(p->name, "\n")] = 0;
    printf("enter the salary of the employee: ");
    scanf("%f", &(p->salary));
}
void display(struct Employee *p, int n)
{
    for (int i = 0; i < n; i++)
        printf("\n%d %s %f", (p + i)->id, (p + i)->name, (p + i)->salary);
}
void maxsal(struct Employee *p, int n)
{
    struct Employee max = *p;
    for (int i = 1; i < n; i++)
    {
        if ((p + i)->salary > max.salary)
        {
            max = *(p + i);
        }
    }
    printf("\nthe highest salaried employee is(are) :");
    for (int i = 0; i < n; i++)
    {
        if ((p + i)->salary == max.salary)
            printf("\n%d %s %f", (p + i)->id, (p + i)->name, (p + i)->salary);
    }
}
void sortbysalary(struct Employee *p, int n)
{
    struct Employee temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            if ((p + j)->salary > (p + j + 1)->salary)
            {
                temp = *(p + j); // equivalent to temp=p[j]
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}
void sortbyname(struct Employee *p, int n)
{
    struct Employee temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)

        {
            if (strcasecmp((p + j)->name, (p + j + 1)->name) > 0)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main()
{
    printf("how many employee data you want to enter : ");
    int n;
    scanf("%d", &n);
    struct Employee x[n];
    for (int i = 0; i < n; i++)
    {
        input(&x[i]);
    }
    printf("the entered employee data are as follows :");
    display(x, n);
    maxsal(x, n);
    sortbysalary(x, n);
    printf("\nthe sorted employee data on the basis of their salary are as follows :");
    display(x, n);
    sortbyname(x, n);
    printf("\nthe sorted employee data on the basis of their names are as follows :");
    display(x, n);
    return 0;
}