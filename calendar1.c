#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    int calendar[12][31] = {0};

    calendar[0][1] = 1;
    calendar[4][1] = 1;
    calendar[6][4] = 1;
    calendar[9][31] = 1;
    calendar[11][25] = 1;
    calendar[11][31] = 1;


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
                printf("\spe%2d\day", day);
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

    return 0;
}
