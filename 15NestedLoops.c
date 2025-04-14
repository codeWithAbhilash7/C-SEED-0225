#include <stdio.h>

void main()
{
    // 4 - 10

    /*
    for (int number = 4; number <= 10; number++) // 4 5 6 7 8 9 10 11
    {
        for (int i = 1; i <= 10; i++) // 1 2 3 4 5 6 7 8 9 10 11
        {
            printf("%d ", i * number);
        }
        printf("\n");
    }
    */

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    /*
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    */

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}