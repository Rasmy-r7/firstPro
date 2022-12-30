#include <stdio.h>
#include <stdlib.h>

void main()
{
    double num1, num2;
    printf("enter number 1: ");
    scanf("%lf", &num1);

    printf("enter number 2: ");
    scanf("%lf", &num2 );

    printf("answer: %f", num1+num2);

    return 0;
}
