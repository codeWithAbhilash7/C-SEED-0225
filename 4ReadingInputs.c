#include <stdio.h>

void main()
{
    // Reading inputs from console
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf_s("%d", &num1);

    printf("Enter second number: ");
    scanf_s("%d", &num2);

    int addition = num1 + num2;
    int sub = num1 - num2;
    int multiplication = num1 * num2;
    int modulus = num1 % num2;
    int division = num1 / num2;

    printf("\n%d + %d = %d", num1, num2, addition);
    printf("\n%d - %d = %d", num1, num2, sub);
    printf("\n%d * %d = %d", num1, num2, multiplication);
    printf("\n%d mod %d = %d", num1, num2, modulus);
    printf("\n%d / %d = %d", num1, num2, division);
}
