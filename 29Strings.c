#include <stdio.h>

void acceptName(char name[])
{
    printf("Enter a name :: ");
    gets(name);
}

void printName(char name[])
{
    puts(name);
}

int main()
{
    // Sachin
    // char name[10] = {'S', 'a', 'c', 'h', 'i', 'n', '\0'};
    // char name[50] = "Sachin";
    char name[50];

    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%c", &name[i]);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%c", name[i]);
    // }


    printf("Entered name is = %s", name);
    scanf("%s", name);

    gets(name);
    puts(name);

    // acceptName(name);
    // printName(name);

    return 0;
}