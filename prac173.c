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


int main() {
    struct Game game;

    printf("Enter first player name: ");
    gets(game.player1.name);
    printf("Enter first player symbol (X/O): ");
    scanf(" %c", &game.player1.symbol);

    printf("Enter second player name: ");
    fflush(stdin);
    gets(game.player2.name);
    printf("Enter second player  symbol (X/O): ");
    scanf(" %c", &game.player2.symbol);

    printf("\nPlayer 1 : ");
    puts(game.player1.name);
    printf("\nPlayer 1 symbol (X/O): %c",game.player1.symbol);


    printf("\nPlayer 2 : ");
    puts(game.player2.name);
    printf("\nPlayer 2 symbol (X/O): %c",game.player2.symbol);


    return 0;
}

