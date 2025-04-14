#include <stdio.h>

void test()
{

    printf("function");
}

int main()
{
    volatile int i = 10;
    printf("Value = %d\n", i);
    printf("Value = %d\n", i);
    printf("Value = %d\n", i);
    printf("Value = %d\n", i);
    printf("Value = %d\n", i);

    for (int j = 0; j < 10; j++)
    {
        printf("Value = %d\n", i);
    }

    //     printf("\n1");
    //     printf("\n2");
    //     printf("\n3");
    // jumpHere:
    //     printf("\n4");
    //     printf("\n5");
    //     if (i < 2)
    //     {
    //         i++;
    //         goto jumpHere;
    //     }
    //     printf("\n6");
    //     printf("\n7");
    //     printf("\n8");
}