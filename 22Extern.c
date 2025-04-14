#include <stdio.h>

extern int counter;

void printCounter();

int main()
{
    printf("Counter from main = %d\n", counter);
    counter = 78946;
    printCounter();
    return 0;
}