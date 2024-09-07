#include <stdio.h>

int main() {
    char A[3][4];
    int i,j;
    int obstacle_row = 2;
    int obstacle_col = 2;
    int king_row=0, king_col=0;


    for ( i = 0; i <3; i++) {
        for (j = 0; j < 4; j++) {
            A[i][j] = '.';
        }
    }


    A[obstacle_row][obstacle_col] = 'X';

    A[king_row][king_col] = 'K';


    printf("Starting position:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }


    while (king_row != 3 - 1 || king_col != 4 - 1) {
        char direction;

        printf("Enter direction (N/S/E/W): ");
        scanf(" %c", &direction);


        switch (direction) {
            case 'N':
                if (king_row > 0) {
                    king_row--;
                }
                break;
            case 'S':
                if (king_row < 3 - 1) {
                    king_row++;
                }
                break;
            case 'E':
                if (king_col < 4 - 1) {
                    king_col++;
                }
                break;
            case 'W':
                if (king_col > 0) {
                    king_col--;
                }
                break;
            default:
                printf("Invalid direction. Try again.\n");
                continue;
        }


        if (king_row == obstacle_row && king_col == obstacle_col) {
            printf("Game over. You hit the obstacle!\n");
            return 0;
        }


        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 4; j++) {
                if (i == king_row && j == king_col) {
                    A[i][j] = 'K';
                } else {
                    A[i][j] = '.';
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

    printf("Congratulations! You won!\n");
    return 0;
}


