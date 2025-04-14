#include <stdio.h>

int calculateSum();

int main()
{
    int sum = calculateSum();
    printf("Sum = %d", sum);
    return 0;
}

int calculateSum()
{
    int total = 0;
    for (int i = 1; i <= 10; i++)
    {
        total += i;
    }
    return total;
}
