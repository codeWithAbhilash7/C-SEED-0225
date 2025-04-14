#include <stdio.h>

void printInt(int num)
{
    printf("Number = %d\n", num);
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// 11 22 33 44 55
int find(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            // printf("key found in the array...\n");
            return i;
        }
    }
    // printf("NOT FOUND...\n");
    return -1;
}

void test(int *a, int size)
// void test(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
        // printf("%d ", *(a + i));
    }
}

void change(int a[], int size)
{
    for (int i = 0; i < 5; i++)
    {
        a[i] = 1;
    }
}

int main()
{
    int arr[5] = {11, 22, 33, 44, 55};
    printArray(arr, 5);
    change(arr, 5);
    printArray(arr, 5);
    /*
        // printf("arr = %d\n", arr);
        // printf("&arr = %d\n", &arr);
        // printf("arr[0] = %d\n", arr[0]);
        // printf("&arr[0] = %d\n", &arr[0]);
        // printf("&arr[1] = %d\n", &arr[1]);

        // int *p = arr;
        // printf("p = %d\n", p);
        // // printf("&p = %d\n", &p);
        // printf("*p = %d\n", *p);
        // p = p + 4;
        // printf("p = %d\n", p);
        // printf("*p = %d\n", *p);

        // printArray(arr, 5);
        // int result = find(arr, 5, 25);
        // printf("Result = %d\n", result);
    */
    /*
     printf("arr = %d\n", arr);
     test(arr, 5);
     int *p = arr;
     */
    return 0;
}