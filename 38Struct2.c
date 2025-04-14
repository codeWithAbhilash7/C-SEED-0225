#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    int rollNumber;
    char name[50];
    float marks;
    // int dd, mm, yy;
    // Date dob; // nested structure
    struct Date
    {
        int dd, mm, yy;
    } Date;

    
} Student;

void printStudent(const Student *s)
{
    printf("\n%d\t%s\t%.2f\t%d-%d-%d", s->rollNumber, s->name, s->marks, s->Date.dd, s->Date.dd, s->Date.dd);
}

int main()
{
    // Date d1 = {15, 12, 2010};
    Student s1 = {10, "Vijay", 87.14, {15, 12, 2010}}; // {10, "Vijay", 87.14, d1};
    s1.marks = -58.76;

    Student *pStudent = &s1;
    // getStudentData(pStudent);
    // printf("\nSize of Student is %d", sizeof(s1));
    // printf("\nSize of pStudent is %d", sizeof(pStudent));
    printStudent(pStudent);

    return 0;
}
