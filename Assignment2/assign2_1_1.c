#include <stdio.h>

int main()
{
    int month, year, days;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;

        case 2:
            printf("Enter the year: ");
            scanf("%d", &year);
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;

        default:
            printf("Invalid month entered.\n");
            return 1; // Exit the program with an error code
    }

    printf("Number of days in month %d is: %d\n", month, days);

    return 0;
}

