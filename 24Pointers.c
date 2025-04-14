#include <stdio.h>

void swap(int *a, int *b)
{
    printf("before swap\ta - %d, b - %d\n", *a, *b);
    printf("a = %d, b = %d\n", a, b);
    printf("&a = %d, &b = %d\n", &a, &b);
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    /*
    // int num = 34;

    // printf("num - %d\n", num);
    // printf("&num - %d\n", &num);

    // int *p = &num;
    // printf("p - %d\n", p);
    // printf("&p - %d\n", &p);
    // printf("*p - %d\n", *p);
*/
    int num1 = 10;
    int num2 = 20;

    printf("before swap\tnum1 - %d, num2 - %d\n", num1, num2);
    printf("&num1 = %d, &num2 = %d\n", &num1, &num2);
    swap(&num1, &num2); // pass by address
    printf("after swap\tnum1 - %d, num2 - %d\n", num1, num2);

    return 0;
}