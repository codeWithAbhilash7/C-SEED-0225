#include <stdio.h>

void main()
{
    // addition of 2 numbers

    int num1 = 20;
    int num2 = 10;

    int addition = num1 + num2;
    int sub = num1 - num2;
    int multiplication = num1 * num2;

    printf("Addition of two numbers is %d", addition);
    printf("Addition of %d and %d is %d", num1, num2, addition);
    printf("\nSubtraction of %d and %d is %d", num1, num2, sub);
    printf("\nProduct of %d and %d is %d", num1, num2, multiplication);
}
