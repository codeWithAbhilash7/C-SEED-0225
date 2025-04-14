#include <stdio.h>

void main()
{
    /*
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    getchar();

    printf("Enter operator: ");
    scanf("%c", &operator);

    switch (operator)
    {
        case '+':
        {
            result = num1 + num2;
            break;
        }
        case '-':
        {
            result = num1 - num2;
            break;
        }
        default:
        {
            printf("Invalid operator\n");
        }
    }
    printf("Result: %d", result);
    */

    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    switch (no)
    {
    case 2:
        printf("Two\n");
        printf("Two\n");
        printf("Two\n");

    case 1:

        printf("One\n");
        printf("One\n");
        printf("One\n");
        break;

    default:
        printf("Default\n");
    }

    /*
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel\n");
        break;

    default:
        printf("Consonant\n");
    }
    */

}