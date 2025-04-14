#include <stdio.h>

// declarations
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);

int main()
{
    int arr[] = {78, 24, 36, 75, 14, -5, 47, 789, 0};
    int size = 9;

    printArray(arr, size);
    // bubbleSort(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
}

// definitions
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        // swapping
        if (minIndex != i)
        {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }

        // printArray(arr, 9);
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            printArray(arr, size);
        }
    }
}

void printArray(int arr[], int size)
{
    printf("\n[");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("]");
}
