#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, id[2];

    printf("\nEnter the id of 2 employees: ");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &id[i]);
        printf("\nThe id of the employees is: %d \n", id[i]);
    }
    system("pause");
    return 0;
}