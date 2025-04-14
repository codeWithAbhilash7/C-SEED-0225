#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Max int = %d", INT_MAX);
    printf("Min int = %d", INT_MIN);
    // char short int int long int long long int float double long double

    // char     1 byte - 0 to 255
    // int      4 byte - -32768 to 32767 = 65536 // -2147483648 to 2147483647 = 4294967296
    // long int 8 byte -
    // short int 2 byte -
    // float    4 byte -    6
    // double   8 byte -    15

    // long long int test = 2147483648;
    // unsigned int test = 2147483648;
    // printf("test = %u\n", test);

    // short int shortInt = 32767;
    // printf("shortInt = %hd\n", shortInt);

    // printf("Size of char is %d\n", sizeof(char));
    // printf("Size of int is %d\n", sizeof(int));
    // printf("Size of float is %d\n", sizeof(float));
    // printf("Size of double is %d\n", sizeof(double));
    // printf("Size of shortInt is %d\n", sizeof(shortInt));

    // for (int i = 0; i <= 255; i++)
    // {
    //     printf("%c - %d\n", i, i);
    // }

    return 0;
}