#include <stdio.h>

int main()
{
    // Create a 3D array for the calendar
    int calendar[6][7][2] = {{{0}}};

    // Set the class days and holidays
    for(int i=0; i<6; i++) {
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
    printf("Calendar:\n\n");

    for(int i=0; i<6; i++) {
        for(int j=0; j<7; j++) {
            printf("%2d/%d: ", i+1, j+1);

            if(calendar[i][j][0]) {
                printf("Holiday\n");
            }
            else if(calendar[i][j][1]) {
                printf("Class day\n");
            }
            else {
                printf("No class\n");
            }
        }
        printf("\n");
    }

    return 0;
}
