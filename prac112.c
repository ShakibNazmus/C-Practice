#include <stdio.h>

int main() {
    int year, month, day;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int calendar[6][7][2]; // 6 weeks, 7 days, 2 values (day, event)

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[1] = 29;
    }

    // Fill in calendar with days and events
    int current_day = 1;
    for (int week = 0; week < 6; week++) {
        for (int day_of_week = 0; day_of_week < 7; day_of_week++) {
            if (current_day <= days_in_month[month-1]) {
                calendar[week][day_of_week][0] = current_day;
                calendar[week][day_of_week][1] = 0; // No event
                current_day++;
            } else {
                calendar[week][day_of_week][0] = 0; // Blank day
                calendar[week][day_of_week][1] = 0; // No event
            }
        }
    }

    // Print out the calendar
    printf("%s %d\n", months[month-1], year);
    printf("Su Mo Tu We Th Fr Sa\n");
    for (int week = 0; week < 6; week++) {
        for (int day_of_week = 0; day_of_week < 7; day_of_week++) {
            if (calendar[week][day_of_week][0] == 0) {
                printf("   ");
            } else {
                printf("%2d ", calendar[week][day_of_week][0]);
            }
        }
        printf("\n");
    }

    return 0;
}
