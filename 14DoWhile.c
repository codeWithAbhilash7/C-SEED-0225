#include <stdio.h>

void main()
{
    int i = 100;
    while (i < 20)
    {
        printf("i is less than 20");
        i++;
    }

    // accept numbers 2 from user
    // accept opeartor from user.. +
    // perform arithmatic operation depending upon operator entered by user
    // ask user if he wants to continue
    // if yes then repeat all the above steps
    // if no then exit the loop

    // char ch = 'y';
    // while (ch == 'y')
    // {
    //     int num1, num2;
    //     printf("\nEnter 2 numbers :: ");
    //     scanf("%d %d", &num1, &num2);

    //     printf("Addition of %d and %d is %d\n", num1, num2, num1 + num2);

    //     printf("Do you want to continue?? (y/n) :: ");
    //     getchar();
    //     scanf("%c", &ch);
    // }

    /*
    int choice;
    do
    {
        printf("\n1. Addition\n2.Subtraction\n3. Exit");
        printf("\nEnter your choice :: ");
        scanf("%d", &choice);

        if (choice >= 3)
        {
            break;
        }

        int num1, num2;
        printf("\nEnter 2 numbers :: ");
        scanf("%d %d", &num1, &num2);
        int result = choice == 1 ? num1 + num2 : num1 - num2;

        printf("Result is %d\n", result);

    } while (choice < 3);


    printf("\n -- Program has finished its execution -- ");
    */

    /*
    float total = 0;
    int choice;
    do
    {
        printf("\n1. Tea - Rs. 5");
        printf("\n2. Coffee - Rs. 15");
        printf("\n3. Samosa - Rs. 25");
        printf("\n0. Exit");
        printf("\nEnter you choice :: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            total += 5;
            break;
        case 2:
            total += 15;
            break;
        case 3:
            total += 25;
            break;
        }

    } while (choice != 0);

    float gst = total * 18 / 100;

    printf("Your total bill is Rs. %.2f\tRs. %.2f\tRs. %.2f", total, gst, gst + total);
    */

    int sum = 0, number;
    do
    {
        printf("\nEnter number to add :: ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);
    printf("Sum = %d", sum);
}