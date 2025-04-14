// file inclusion - include
#include <stdio.h>

// MACRO
#define PI 3.14

#define MAX(a, b) a > b ? a : b

int getMax(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    float area = 2 * PI * 87.54;
    int max = MAX(10, 20);
    int max1 = getMax(10, 20);

    printf("%d  %d", max, max1);
    return 0;
}