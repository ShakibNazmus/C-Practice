#include <stdio.h>

int main() {
    char A[3][3];
    int i,j;

    int start_row, start_col;


    for ( i = 0; i <3; i++) {
        for (j = 0; j < 3; j++) {
            A[i][j] = '0';
        }
    }


    start_row = 0;
    start_col = 0;
    A[start_row][start_col] = 'S';


    printf("Starting position:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }


    while (start_row != 3 - 1 || start_col != 3 - 1) {
        char direction;

        printf("Enter direction (U/D/L/R): ");
        scanf(" %c", &direction);


        switch (direction) {
            case 'U':
                if (start_row > 0) {
                    start_row--;
                }
                break;
            case 'D':
                if (start_row < 3 - 1) {
                    start_row++;
                }
                break;
            case 'L':
                if (start_col > 0) {
                    start_col--;
                }
                break;
            case 'R':
                if (start_col > 3 - 1) {
                    start_col++;
                }
                break;
            default:
                printf("Invalid position. Try again.\n");
                continue;
        }


        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 4; j++) {
                if (i == start_row && j == start_col) {
                    A[i][j] = 'S';
                } else {
                    A[i][j] = '0';
                }
            }
        }


        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 4; j++) {
                printf("%c ", A[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}
