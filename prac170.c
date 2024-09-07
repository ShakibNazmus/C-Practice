#include <stdio.h>

struct Board {
    char grid[3][3];
};

struct Player {
    char name[50];
    char symbol;
};

struct Game {
    struct Board board;
    struct Player player1;
    struct Player player2;
};

void initialize_board(struct Board *board) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board->grid[i][j] = ' ';
        }
    }
}

void display_board(struct Board *board) {
    int i, j;
    printf("-------------\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("| %c ", board->grid[i][j]);
        }
        printf("|\n-------------\n");
    }
}



int main() {
    struct Game game;


    initialize_board(&game.board);



    printf("Enter first player name: ");
    gets(game.player1.name);
    printf("Enter first player symbol (X/O): ");
    scanf(" %c", &game.player1.symbol);

    printf("Enter second player name: ");
    fflush(stdin);
    gets(game.player2.name);
    printf("Enter second player symbol (X/O): ");
    scanf(" %c", &game.player2.symbol);



    display_board(&game.board);



    return 0;
}
