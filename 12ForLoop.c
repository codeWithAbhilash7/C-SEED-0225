#include <stdio.h>

void main()
{
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d ", i);
    // }

    // for (int i = 20; i >= 10; i--)
    // {
    //     printf("%d ", i);
    // }

    // print all numbers between start and end..
    int start = 1;
    int end = 10;
    for (int i = start; i <= end; i++)
    {
        if (i == 5)
        {
            printf("\nvalue of i is %d\n", i);
            continue;
        }
        printf("%d ", i);
    }

    printf("\nloop finished its execution...");
}