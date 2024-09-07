#include <stdio.h>

int main()
{
    int year, month, day, daysInMonth, dayOfWeek, startingDay;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // days in each month

    // Get the year from the user
    printf("Enter the year: ");
    scanf("%d", &year);

    // Get the starting day of the week for January 1st of the given year
    dayOfWeek = 1; // 0 = Sunday, 1 = Monday, ..., 6 = Saturday
    startingDay = dayOfWeek;

    // Print the calendar for each month of the year
    for(month = 1; month <= 12; month++)
    {
        // Print the month and year
        printf("\n\n%*s", 20, "");
        switch(month)
        {
            case 1:
                printf("January");
                break;
            case 2:
                printf("February");
                break;
            case 3:
                printf("March");
                break;
            case 4:
                printf("April");
                break;
            case 5:
                printf("May");
                break;
            case 6:
                printf("June");
                break;
            case 7:
                printf("July");
                break;
            case 8:
                printf("August");
                break;
            case 9:
                printf("September");
                break;
            case 10:
                printf("October");
                break;
            case 11:
                printf("November");
                break;
            case 12:
                printf("December");
                break;
        }
        printf(" %d\n\n", year);
        printf(" Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        // Get the number of days in the month
        if(month == 2)
        {
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                daysInMonth = 29;
            }
            else
            {
                daysInMonth = 28;
            }
        }
        else
        {
            daysInMonth = days[month - 1];
        }

        // Print the calendar for the month
        for(day = 1; day <= daysInMonth; day++)
        {
            if(day == 1)
            {
                for(int i = 0; i < startingDay; i++)
                {
                    printf("     ");
                }
            }
            printf("%4d ", day);
            if(++dayOfWeek > 6)
            {
                printf("\n");
                dayOfWeek = 0;
            }
            startingDay = dayOfWeek;
        }
    }

    return 0;
}

