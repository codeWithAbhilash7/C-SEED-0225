#include <stdio.h>

void main()
{
    //	int i = 10.97;
    //	printf("\nValue of i : %d\n", i);

    /*
    int number = 7;
    int deno = 2;
    float result = (float)number / deno; // 3
                                         // int / int
                                         // int / float
                                         // float / int

    printf("\nResult : %d\n", result);
    */

    int physics, chemistry;

    printf("Enter physics marks: ");
    scanf("%d", &physics);

    printf("Enter chemistry marks: ");
    scanf("%d", &chemistry);

    int total = physics + chemistry;
    int totalSubjects = 2;
    float percentage = (float)total / totalSubjects; // explicite  type casting

    int iValue = 'a'; // implicite type casting // 32
    char chValue = 84;
    int iValue2 = 10.97; // implicite type casting
    float fValue = 'b';  // implicite type casting

    printf("Total: %d\n", total);
    printf("Percentage: %f\n", percentage);
}