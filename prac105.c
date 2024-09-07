#include <stdio.h>

int main()
{
    // Create a 3D array for the calendar
    int calendar[12][31][2] = {{{0}}};

    // Set the holidays
    calendar[0][1][0] = 1;  // New Year's Day
    calendar[6][4][0] = 1;  // Independence Day
    calendar[11][25][0] = 1; // Christmas Day

    // Set the weekends as no-class days
    for(int i=0; i<12; i++) {
        for(int j=0; j<31; j++) {
            if(j % 7 == 5 || j % 7 == 6) {
                calendar[i][j][1] = 0; // No class
            }
            else {
                calendar[i][j][1] = 1; // Class day
            }
        }
    }

    // Print the calendar
    printf("Calendar:\n\n");

    for(int i=0; i<12; i++) {
        printf("Month %2d: ", i+1);
        for(int j=0; j<31; j++) {
            printf("%2d: ", j+1);
            if(calendar[i][j][0]) {
                printf("Holiday\t");
            }
            else if(calendar[i][j][1]) {
                printf("Class day\t");
            }
            else {
                printf("No class\t");
            }
        }
        printf("\n");
    }

    return 0;
}

