// write the program for addition of two numbers
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter the value of a & b: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("The addition of two numbers is %d\n", c);
    c = a - b;
    printf("The subtraction of two numbers is %d\n", c);
    c = a * b;
    printf("The product of two numbers is %d\n", c);
    c = a / b;
    printf("The division of two numbers is %d\n", c);
    getch();
}