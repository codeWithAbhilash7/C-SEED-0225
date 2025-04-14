#include <stdio.h>

float rateOfInterest = 9.75; // global variable

void staticVariableTest()
{
    // static
    // scope : within the blocks
    // lifespan : throughout the entire program
    // memory : data section
    // initial value : 0
    static int var = 10;
    printf("\n%d - %u", var, &var);
    var = var + 10;
}

float getSI(int p, int n)
{
    return p * n * rateOfInterest / 100;
}

int main()
{
    // local - auto
    /*
        // auto
        // scope : within the blocks
        // lifespan : within the blocks
        // memory : stack
        // initial value : garbage
        int num = 10;

        // {
        //     int b = 23;
        // }
        // printf("%d", b);

        // for (int i = 0; i < 10; i++)
        // {
        // }

        // printf("%d", i);
    */

    /*
        staticVariableTest();
        staticVariableTest();
        staticVariableTest();
        staticVariableTest();
        staticVariableTest();
        // printf("\nStatic data = %d", staticVar);
    */

    register int num = 10;       // auto

    return 0;
}