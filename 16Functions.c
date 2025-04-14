#include <stdio.h>

void print(); // declaration
void printNewLine();

void main()
{
    print();
    print();
    print();
    print();
}

/*
return-type function-name(arguments(optional))
{
    // statements
    // statements
}
*/
void print() //  definition
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d, ", i);
    }
    printNewLine();
}

void printNewLine()
{
    printf("\n");
}