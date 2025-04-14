#include <stdio.h>
#include <string.h>

union Student
{
    int rollNumber; // 4
    char name[8];   // 20
    float marks;    // 4
};

int main()
{
    union Student s1;

    strcpy(s1.name, "ABCDEFGH");
    s1.rollNumber = 11;
    s1.marks = 87.98;

    printf("\nroll number = %d", s1.rollNumber);
    printf("\nmarks = %f", s1.marks);
    printf("\nname = %s", s1.name);

    

    // printf("\nSize of Student is %d", sizeof(union Student));
    return 0;
}