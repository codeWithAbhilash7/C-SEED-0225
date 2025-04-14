#include <stdio.h>

int main()
{
    /*
                      64 32 16 8 4 2 1
               32      0   1  0 0 0 0 0
               42          1  0 1 0 1 0
           */

                        // 8 4 2 1
    int a = 13;         // 1 1 0 1 
    int b = 6;          // 0 1 1 0
                  //&   // 0 1 0 0
                  //|   // 1 1 1 1

    // AND --> true if BOTH are true (non zero)
    // OR  --> true if ANY ONE is true (non zero)

    int result = a | b;   // both must be true              
    printf("%d & %d = %d", a, b, result);
}