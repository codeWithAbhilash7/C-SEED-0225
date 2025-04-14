#include <stdio.h>

int addition(int num1, int num2);

void main()
{
    int a = 10, b = 20;
    int answer = addition(a, b);
    printf("Answer = %d", answer);
}

int addition()
{
    int result = 10 + 20;
    return result;
}
