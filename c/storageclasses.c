#include <stdio.h>
#include <stdlib.h>

void display();
void main()
{
    display();
    display();
    display();
    system("pause");
}

void display()
{
    static int i = 10;
    printf("\n%d", i);
    i++;
}