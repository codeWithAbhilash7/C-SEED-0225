#include <stdio.h>

void print(); // declaration
void add(int num1, int num2);

void main()
{
    // add(10, 20);
    // add(24, 76);
    // add(11.11, 22.22);

    int num1 = 10, num2 = 20;
    printf("main before function call --> num1 = %d\tnum2 = %d\n", num1, num2);
    add(num1, num2);
    printf("main after function call --> num1 = %d\tnum2 = %d\n", num1, num2);
}

void add(int num1, int num2)
{
    printf("add() before  --> num1 = %d\tnum2 = %d\n", num1, num2);
    num1 = 55;
    num2 = 57;
    // printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("add() after  --> num1 = %d\tnum2 = %d\n", num1, num2);
}

void print() //  definition
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}
