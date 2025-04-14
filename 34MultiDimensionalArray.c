#include <stdio.h>

int main()
{
    /*
        // lets store marks of 10 students (each student is having 5 subjects)
        int student1[2][5] = {{76, 45, 76, 87, 45},
                              {87, 56, 76, 45, 23}};

        for (int row = 0; row < 2; row++)
        {
            for (int col = 0; col < 5; col++)
            {
                scanf("%d", &student1[row][col]);
            }
            printf("\n");
        }

        for (int row = 0; row < 2; row++)
        {
            for (int col = 0; col < 5; col++)
            {
                printf("%d ", student1[row][col]);
            }
            printf("\n");
        }
    */

    char name[][10] = {"John", "Jin", "Mic", "ASDH", "asdjhe"};

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}