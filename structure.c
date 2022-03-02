#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id;
    char name;
    float salary;
} E;

int main()
{
    printf("\nEnter the id of the employee: ");
    scanf("%d", &E.id);
    printf("\nEnter the name of the employee: ");
    scanf(" %c", &E.name);
    printf("\nEnter the salary of the employee: ");
    scanf("%f", &E.salary);
    printf("\nThe id of the employee is: %d \n", E.id);
    printf("\nThe name of the employee is: %c \n", E.name);
    printf("\nThe salary of the employee is: %f \n", E.salary);
    system("pause");
}