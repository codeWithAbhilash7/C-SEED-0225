/* 1. declare an array
 2. initialize with values --> int arr[5] = {11, 25, 36, 74, 98};
 3. print all values using index --> printf("%d ", arr[0]);
 4. print array elements using loop --> for (int i = 0; i < 5; i++)
 5. store array element using index --> arr[0] = 37;
 6. Accept array elements from user using scanf();
 7. calculate total of all array elements
    a. create a variable and assign 0 to it (to avoid any garbage value)
    b. iterate  thru all array (visit all) elements one by one and add that value in total
    c. after loop, print value of 'total' variable
 8. find maximum value from a given array
 9. find minimum value from a given array
*/
#include <stdio.h>

int main()
{
    int arr[5] = {45, 97, 14, 65, 17};
    // int arr[5];

    // arr[0] = 84;
    // arr[1] = 54;
    // arr[2] = 98;
    // arr[3] = 23;
    // arr[4] = 54;

    // printf("Enter 5 array elements :: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // calculate total of all array elements

    // int total = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     total += arr[i];
    // }
    // printf("\nTotal = %d", total);

    int maximum = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i];
        }
    }
    printf("\nMaximum = %d", maximum);
    return 0;
}