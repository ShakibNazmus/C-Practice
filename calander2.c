#include <stdio.h>

int main() {
    // Ask the user for a year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Create a calendar array for the given year
    int calendar[12][31] = {0};

    // Mark some special days
    calendar[0][1] = 1;
    calendar[1][21]=1;
    calendar[2][26]=1;
    calendar[3][1]=1;
    calendar[4][1] = 1;
    calendar[6][4] = 1;
    calendar[9][31] = 1;
    calendar[11][16]=1;
    calendar[11][25] = 1;
    calendar[11][31] = 1;

    // Print the calendar
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    for (int month = 0; month < 12; month++) {
        printf("=========================\n");
        printf("         %02d/%d\n", month+1, year);
        printf("=========================\n");
        int days_in_month = (month == 3 || month == 5 || month == 8 || month == 10) ? 30 : 31;
        if (month == 1) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                days_in_month = 29;
            } else {
                days_in_month = 28;
            }
        }
        printf(" ");
        int day_of_week = 0;
        for (int day = 1; day <= days_in_month; day++) {
            if (day == 1) {
                printf("%*s", day_of_week*4, "");
            }
            if (calendar[month][day-1] == 1) {
                printf("\033[1;31m%2d\033[0m ", day);
            } else {
                printf("%2d ", day);
            }
            day_of_week++;
            if (day_of_week > 6) {
                day_of_week = 0;
                printf("\n ");
            }
        }
        printf("\n");
    }
    printf("=========================\n");

    // Print the special days
    printf("\nSpecial days:\n");
    if (calendar[0][1] == 1)
        printf("January 1st - New Year's Day\n");
    if(calendar[1][21]=1)
        printf("February 21st - Language movement day\n");
    if(calendar[2][26]=1)
        printf("March 26th - Independence Day\n");
    if(calendar[3][1]=1)
        printf("April 1st - April fool day\n");
    if (calendar[4][1] == 1)
        printf("May 1st - May Day\n");
    if (calendar[6][4] == 1)
        printf("July 4th - Independence Day\n");
    if (calendar[9][31] == 1)
        printf("October 31st - Halloween\n");
    if(calendar[11][16]=1)
        printf("December 16th - Victory day\n");
    if (calendar[11][25] == 1)
        printf("November 25th - Thanksgiving Day\n");
    if (calendar[11][31] == 1)
        printf("December 31st - New Year's Eve\n");

    return 0;
}
