#include <stdio.h>
#include <string.h>

// premitive data types --> int, char, float, double
// user defined data type --> struct, union

// typedef int INT;

typedef struct Student
{
    // members / attributes
    int rollNo;
    float avg;
    char name[20];
} Student;

Student createNewStudent()
{
    Student student;
    printf("Enter roll number :: ");
    scanf("%d", &student.rollNo);

    getchar();
    printf("Enter Name :: ");
    gets(student.name);

    printf("Enter Avg :: ");
    scanf("%f", &student.avg);

    return student;
}

void printStudent(struct Student student)
{
    printf("\n%d %s %.2f", student.rollNo, student.name, student.avg);
}

int main()
{
    /*
    // struct Student s1; //  = {10, "Ajay", 78.64};
    // s1.rollNo = 10;
    // s1.avg = 76.87;
    // strcpy(s1.name, "Ajay");

    Student s1 = createNewStudent();
    Student s2 = s1;

    printStudent(s1);
    printStudent(s2);
*/

    Student students[5];

    for (int i = 0; i < 5; i++)
    {
        students[i] = createNewStudent();
    }

    for (int i = 0; i < 5; i++)
    {
        printStudent(students[i]);
    }
}
