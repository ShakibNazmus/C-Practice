#include <stdio.h>
#include <stdbool.h>

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

void initialize_board(struct Board* board) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board->grid[i][j] = ' ';
        }
    }
}

void display_board(struct Board* board) {
    int i, j;
    printf("-------------\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("| %c ", board->grid[i][j]);
        }
        printf("|\n-------------\n");
    }
}

bool is_valid_move(struct Board* board, int row, int col) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return false;  // Invalid move
    }
    if (board->grid[row][col] == ' ') {
        return true;  // Valid move
    }
    return false;  // Move already occupied
}

bool is_game_over(struct Board* board, char symbol) {
    int i, j;

    // Check rows
    for (i = 0; i < 3; i++) {
        if (board->grid[i][0] == symbol && board->grid[i][1] == symbol && board->grid[i][2] == symbol) {
            return true;  // Game over
        }
    }

    // Check columns
    for (j = 0; j < 3; j++) {
        if (board->grid[0][j] == symbol && board->grid[1][j] == symbol && board->grid[2][j] == symbol) {
            return true;  // Game over
        }
    }

    // Check diagonals
    if ((board->grid[0][0] == symbol && board->grid[1][1] == symbol && board->grid[2][2] == symbol) ||
        (board->grid[0][2] == symbol && board->grid[1][1] == symbol && board->grid[2][0] == symbol)) {
        return true;  // Game over
    }

    return false;  // Game not over yet
}

void make_move(struct Board* board, int row, int col, char symbol) {
    board->grid[row][col] = symbol;
}

int main() {
    struct Game game;
    int row, col;
    int current_player = 1;
    int game_status = 0;  // 0: In progress, 1: Player 1 wins, 2: Player 2 wins, 3: Draw

    printf("Enter Player 1 name: ");
    scanf("%s", game.player1.name);
    game.player1.symbol = 'X';

    printf("Enter Player 2 name: ");
    scanf("%s", game.player2.name);
    game.player2.symbol = 'O';

    initialize_board(&game.board);

    while (game_status == 0) {
        display_board(&game.board);

        if (current_player == 1) {
            printf("%s's turn (symbol: %c)\n", game.player1.name, game.player1.symbol);
        } else {
            printf("%s's turn (symbol: %c)\n", game.player2.name, game.player2.symbol);
        }

        printf("Enter row and column (0-2): ");
        scanf("%d %d", &row, &col);

        if (is_valid_move(&game.board, row, col)) {
            if (current_player == 1) {
                make_move(&game.board, row, col, game.player1.symbol);
                if (is_game_over(&game.board, game.player1.symbol)) {
                    game_status = 1;  // Player 1 wins
                }
                current_player = 2;
            } else {
                make_move(&game.board, row, col, game.player2.symbol);
                if (is_game_over(&game.board, game.player2.symbol)) {
                    game_status = 2;  // Player 2 wins
                }
                current_player = 1;
            }
            if (is_game_over(&game.board, game.player1.symbol) == false && is_game_over(&game.board, game.player2.symbol) == false) {
                if (is_game_over(&game.board, game.player1.symbol) == true && is_game_over(&game.board, game.player2.symbol) == true) {
                    game_status = 3;  // Draw
                }
            }
        } else {
            printf("Invalid move. Please try again.\n");
        }
    }

    display_board(&game.board);

    if (game_status == 1) {
        printf("%s wins!\n", game.player1.name);
    } else if (game_status == 2) {
        printf("%s wins!\n", game.player2.name);
    } else if (game_status == 3) {
        printf("It's a draw!\n");
    }

    return 0;
}

