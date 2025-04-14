#include <stdio.h>

void main()
{
    /*
        arithmatic operators --> + - / * %
        assignment operators --> = += -= *= /=
        Relational operators --> == != > < >= <=
        Logical operators --> && || !
    */

    // int a = 10;
    // // a = a + 15;
    // printf("a = %d\n", a);
    // // a = a + 15;
    // a += 15; // short hand operator
    // printf("a = %d\n", a);

    // int a = 20, b = 20;
    // if (a > b)
    // {
    //     printf("a is greater than b\n");
    // }
    // else
    // {
    //     printf("b is greater than a\n");
    // }

    /*
    int age;
    char gender;

    printf("\nEnter your gender : ");
    scanf("%c", &gender);

    printf("\nEnter your age : ");
    scanf("%d", &age);

    printf("\nGender = %c and age = %d", gender, age);

    // age and gender from user
    // age >= 60 and gender = m --> interest rate is 9%
    // age >= 60 and gender = f --> interest rate is 10%
    // age < 60  --> interest rate is 8%

    if (age >= 60 && gender == 'm')
    {
        printf("\nInterest rate is 9%%\n");
    }
    else if (age >= 60 && gender == 'f')
    {
        printf("\nInterest rate is 10%%\n");
    }
    else
    {
        printf("\nInterest rate is 8%%\n");
    }
    */

    /*
    int age = 98;
    if (!(age > 20))
    {
        printf("Inside if\n");
    }
    else
    {
        printf("Inside else\n ");
    }
    */

    // int marks;
    // printf("\nEnter your marks : ");
    // scanf("%d", &marks);

    // // marks must be greater than or equals to 0 and less than or equals to 100
    // if (marks >= 0 && marks <= 100)
    // {
    //     printf("Marks are valid");
    // }
    // else
    // {
    //     printf("Marks are invalid");
    // }

    // char ch;
    // printf("\nEnter a character : ");
    // scanf("%c", &ch);

    // // a e i o u
    // if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    // {
    //     printf("Vowel\n");
    // }
    // else
    // {
    //     printf("Consonant\n");
    // }

    // unary -->  ++ -- !
    // binary --> + - * / % && || == != < > <= >=
    // ternary -->

    int no = 10;

    // if (no == 10)
    //     printf("No is 10\n");
    // else
    //     printf("No is not 10\n");

    char result = no == 10 ? 'A' : 'B';

    printf("Result = %c\n", result);

    // accpet age from user
    // if it is greater than or equals to 18 then print eligible for voting
    // else print not eligible for voting
}