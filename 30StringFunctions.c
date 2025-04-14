#include <stdio.h>
#include <string.h>

int myStrLen(const char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

char *myStrCpy(char *dest, const char *src)
{
    int index = 0;
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}

char *myStrNCpy(char *dest, const char *src, int n)
{
    int index = 0;
    while (src[index] != '\0' && index < n)
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}

int myStrCmp(const char *str1, const char *str2)
{
    // str1 = "abcd"
    // str2 = "av";
    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] > str2[i])
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
    return 0;
}

char *myStrRev(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

int main()
{
    /*
    // char str1[50];
    // char str2[50];
    // char *str3;
    // printf("Enter a name :: ");
    // scanf("%s", str1);
    // gets(str1);
    // printf("Entered name is = %s", str1);

    // int length = strlen(str1);
    // int length = myStrLen(str1);
    // printf("\nLength is %d", length);

    // str3 = strcpy(str2, str1);
    // str3 = myStrCpy(str2, str1);
    // str3 = myStrNCpy(str2, str1, 2);

    // printf("\nOriginal string is = %s", str1);
    // printf("\nCopied string is = %s", str2);
    // printf("\nCopied string is = %s", str2);
*/

    // char str1[] = "India is my country";
    // char str2[] = "in abcd";

    // -1 --> second string is greater
    // 0 --> strings are equal
    // 1 --> first string is greater
    // int result = strcmp(str1, str2);
    // int result = myStrCmp(str1, str2);
    // int result = strnicmp(str1, str2, 2);
    // printf("Result = %d", result);

    // printf("Rev = %s", myStrRev(str1));

    /*
        1. strlen
        2. strcpy
        3. strcmp
        4. stricmp
        5. strncmp
        6. strnicmp
        7. strcat
        8. strncat
        9. strlwr
        10. strupr
        11. strchr
        12. strstr
        13. strrev
        14. strrchr
        15. strcspn
        16. strtok
        17. 
    */

    char myStr[] = "India is my country";
    int pos = strcspn(myStr, "axz");
    printf("%d", pos);

    return 0;
}