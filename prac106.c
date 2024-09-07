#include <stdio.h>

int main()
{
    int year, month, day, daysInMonth, dayOfWeek, startingDay;


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
        printf("%d\n %d\n", month, year);
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
        else if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            daysInMonth = 30;
        }
        else
        {
            daysInMonth = 31;
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
