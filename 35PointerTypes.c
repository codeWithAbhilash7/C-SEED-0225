#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    // int *ptr;            // wild - pointer pointing to a garbage location
    // int *ptr = NULL;     // NULL - pointer pointing to NULL value
    // NULL, nullptr

    int *ptr1 = (int *)malloc(40);
    int *ptr2 = ptr1;

    free(ptr1);
    printf("%d", *ptr2); // dangling pointer

    // printf("value = %d\n", value);
    // printf("ptr = %d", ptr);
    // if (ptr != NULL)
    // {
    //     printf("*ptr = %d", *ptr);
    // }
    printf("\n\nProgram has finished its execution\n\n");
    return 0;
}