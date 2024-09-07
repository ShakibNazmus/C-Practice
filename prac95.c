#include <stdio.h>



int main() {
    char A[3][4];
    int i,j;
    int obstacle_row = 2;
    int obstacle_col = 2;
    int queen_row, queen_col;

    // Initialize the board with empty squares
    for ( i = 0; i <3; i++) {
        for (j = 0; j < 4; j++) {
            A[i][j] = '.';
        }
    }

    // Place the obstacle on the board
    A[obstacle_row][obstacle_col] = 'X';

    // Place the queen in a random position
    queen_row = 0;
    queen_col = 0;
    A[queen_row][queen_col] = 'Q';

    // Print the initial board
    printf("Starting position:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }

    // Move the queen to the corner without hitting the obstacle
    while (queen_row != 3 - 1 || queen_col != 4 - 1) {
        char direction;

        printf("Enter direction (N/S/E/W): ");
        scanf(" %c", &direction);

        // Update the queen's position based on the direction
        switch (direction) {
            case 'N':
                if (queen_row > 0) {
                    queen_row--;
                }
                break;
            case 'S':
                if (queen_row < 3 - 1) {
                    queen_row++;
                }
                break;
            case 'E':
                if (queen_col < 4 - 1) {
                    queen_col++;
                }
                break;
            case 'W':
                if (queen_col > 0) {
                    queen_col--;
                }
                break;
            default:
                printf("Invalid direction. Try again.\n");
                continue;
        }

        // Check if the queen hit the obstacle
        if (queen_row == obstacle_row && queen_col == obstacle_col) {
            printf("Game over. You hit the obstacle!\n");
            return 0;
        }

        // Update the board with the new queen position
        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 4; j++) {
                if (i == queen_row && j == queen_col) {
                    A[i][j] = 'Q';
                } else {
                    A[i][j] = '.';
                }
            }
        }

        // Print the updated board
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
