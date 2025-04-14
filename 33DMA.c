#include <stdio.h>
#include <stdlib.h>

int *allocateMemoryUsingMalloc(int size)
{
    // malloc
    int *ptr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter value %d = ", i + 1);
        scanf("%d", &ptr[i]);
    }

    return ptr;
}

int *allocateMemoryUsingCalloc(int size)
{
    // calloc
    int *ptr = (int *)calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter value %d = ", i + 1);
        scanf("%d", &ptr[i]);
    }

    return ptr;
}

int *allocateMemoryUsingRealloc(int *ptr, int existingSize, int increaseBy)
{
    // realloc
    ptr = (int *)realloc(ptr, existingSize + increaseBy);
    for (int i = existingSize; i < existingSize + increaseBy; i++)
    {
        printf("Enter value %d = ", i + 1);
        scanf("%d", &ptr[i]);
    }

    return ptr;
}

int main()
{
    int size = 0;
    printf("Enter size of the array :: ");
    scanf("%d", &size);

    int *ptr = allocateMemoryUsingCalloc(size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n\n");
    int increaseBy = 2;
    ptr = allocateMemoryUsingRealloc(ptr, size, increaseBy);
    for (int i = 0; i < size + increaseBy; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);

    return 0;
}