#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    float y;

    printf("\n Enter the number: ");
    scanf("%d", &x);
    y = sqrt(x);
    printf("\n The square root of %d is %0.2f \n", x, y);
    system("pause");
    return 0;
}