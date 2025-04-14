#include <stdio.h>

void print(char str[])
{
    printf("%s", str);
}

int main()
{
    // char str[] = {'a', 'b', 'c'};
    char str[] = "abcdefgh";
    print(str);
    return 0;
}