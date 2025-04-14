#include <stdio.h>

// function calling itself is recursion
// 5 --> 5 * 4 * 3 * 2
int factorial(int n)
{
    printf("\nValue of n is = %d", n);
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    printf("\n\nFactorial is = %d", factorial(5));
    // stack overflow
    return 0;
}