
#include <stdio.h>
#include <string.h>

int numberOfOccurances(int arr[], int size, int number)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            count++;
        }
    }
    return count;
}

float avg(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    float avg = (float)sum / size;
    return avg;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 2, 1};
    int number = 2;
    // int result = numberOfOccurances(arr, sizeof(arr) / sizeof(arr[0]), 4);
    // float result = avg(arr, sizeof(arr) / sizeof(arr[0]));
    // printf("Result = %f", result);

    char userid[20], password[20];
    int count = 1;
    do
    {
        printf("\nEnter user id :: ");
        gets(userid);
        printf("\nEnter password :: ");
        gets(password);

        if (strcmp("admin", userid) == 0 &&
            strcmp("1234", password) == 0)
        {
            printf("\nSuccess");
            break;
        }
        else
        {
            // repeat 3 times
            printf("\nInvalid credentials.. attempt #%d", count);
            count++;
        }
    } while (count <= 3);
    
    

    return 0;
}
