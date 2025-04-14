#include <stdio.h>

void main()
{
    int a = 10;

    // increment operator
    // a++;	// a = a + 1;	// post increment
    // ++a; // a = a + 1;		// pre increment

    // int b = ++a;
    //  a = a + 1
    //  b = a

    int b = a++;
    // b = a
    // a = a + 1

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
