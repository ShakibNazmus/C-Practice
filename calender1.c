#include <stdio.h>

int main() {
    int year, month, day;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *month_name[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char *special_days[] = {"New Year's Day", "Valentine's Day", "April Fool's Day", "Mother's Day", "Father's Day", "Halloween", "Thanksgiving", "Hanukkah", "Christmas"};

    printf("Please enter a year: ");
    scanf("%d", &year);

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[1] = 29;
    }

    // Print calendar for the year
    printf("\nCalendar for %d:\n", year);
    for (month = 0; month < 12; month++) {
        printf("%s\n", month_name[month]);
        printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
        for (day = 1; day <= days_in_month[month]; day++) {
            if (day == 1) {
                // Print spaces to align with correct day of the week
                int weekday = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + ((13 * (month + 1) - 1) / 5) + 1) % 7;
                int i;
                for (i = 0; i < weekday; i++) {
                    printf("     ");
                }
            }
            printf("%-5d", day);
            // Check if the current day is a special day
            if (month == 0 && day == 1) {
                printf("*");
            }
            else if (month == 1 && day == 14) {
                printf("*");
            }
            else if (month == 3 && day == 1) {
                printf("*");
            }
            else if (month == 4 && day == 10) {
                printf("*");
            }
            else if (month == 5 && day == 21) {
                printf("*");
            }
            else if (month == 9 && day == 31) {
                printf("*");
            }
            else if (month == 10 && day == 26) {
                printf("*");
            }
            else if (month == 11 && day >= 2 && day <= 10) {
                printf("*");
            }
            else if (month == 11 && day == 25) {
                printf("*");
            }
            else {
                printf(" ");
            }
            if (day % 7 == 0 || day == days_in_month[month]) {
                printf("\n");
            }
        }
    }

    // Search for special days in the year
    int i;
    printf("\nSpecial days in %d:\n", year);
    for (i = 0; i < 9; i++) {
        if (i == 3 || i == 4) {
            if ((year == 2020 && i == 3) || (year == 2021 && i == 4)) {
                printf("%s: May %d\n", special_days[i], 9);
            }
        }
        else {
            int j;
            for (j = 0; j < days_in_month[i]; j++) {
                if (i == 0 && j == 0) {
                    continue;
                }
                else if (i == 1 && j == 13) {
                    continue;
                }
                else if (i == 2 && j == 31) {
                    continue;
                }
                else if (i == 9 && j == 30) {
                    continue;
                }
                else if (i == 10 && j == 25) {
                    continue;
                }
                else if (i == 11 && (j < 2 || j > 10) && j != 25) {
                    continue;
                }
                int day_of_week = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + ((13 * (i + 1) - 1) / 5) + j + 1) % 7;
                if (day_of_week == 0) {
                    printf("%s: %s %d\n", special_days[i], month_name[i], j + 1);
                }
            }
        }
    }

    return 0;
}

