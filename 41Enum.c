#include <stdio.h>

enum Days
{
    SUN,
    MON,
    TUE,
    WED,
    THUR = 0,
    FRI,
    SAT
};

int main()
{
    enum Days day = SUN;
    printf("SUN = %d\n", SUN);
    printf("MON = %d\n", MON);
    printf("TUE = %d\n", TUE);
    printf("WED = %d\n", WED);
    printf("THUR = %d\n", THUR);
    printf("FRI = %d\n", FRI);
    printf("SAT = %d\n", SAT);

    // switch (day)
    // {
    // case SUN:
    //     printf("Its sunday");
    //     break;

    // case MON:
    //     printf("Its monday");
    //     break;

    // case TUE:
    //     printf("Its tuesday");
    //     break;

    // case WED:
    //     printf("Its Wednesday");
    //     break;
    // }

    return 0;
}