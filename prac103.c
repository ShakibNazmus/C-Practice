#include <stdio.h>

int main()
{
    // Create a 3D array for the calendar
    int calendar[52][7][2] = {{{0}}};

    // Set the class days and holidays
    for(int i=0; i<52; i++) {
        for(int j=0; j<7; j++) {
            if(j == 5) { // Friday
                calendar[i][j][0] = 1; // Holiday
            }
            else if(j == 0 || j == 2) { // Sunday or Tuesday
                calendar[i][j][1] = 1; // Class day
            }
        }
    }

    // Print the calendar
    printf("Calendar for 2023:\n\n");

    for(int i=0; i<52; i++) {
        printf("Week %2d: ", i+1);
        for(int j=0; j<7; j++) {
            if(j == 5) { // Friday
                printf("Holiday\t");
            }
            else if(j == 6) { // Saturday
                printf("Saturday\t");
            }
            else if(j == 0) { // Sunday
                printf("Sunday\t");
            }
            else if(calendar[i][j][1]) { // Class day
                printf("Class day\t");
            }
            else { // No class
                printf("No class\t");
            }
        }
        printf("\n");
    }

    return 0;
}
