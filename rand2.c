#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_NAMES 12
#define MAX_NAME_LENGTH 30

int main() {
    // Declare an array of strings to hold the names
    char names[MAX_NAMES][MAX_NAME_LENGTH+1]; // add 1 for null terminator

    // Prompt the user to enter the names
    printf("Enter up to %d names (maximum %d characters per name):\n", MAX_NAMES, MAX_NAME_LENGTH);
    int num_names = 0;
    while (num_names < MAX_NAMES) {
        printf("Name #%d (or enter 'done' to stop): ", num_names+1);
        fgets(names[num_names], MAX_NAME_LENGTH+1, stdin);
        // Remove the newline character from the end of the string
        names[num_names][strcspn(names[num_names], "\n")] = '\0';
        if (strcmp(names[num_names], "done") == 0) {
            break;
        }
        num_names++;
    }

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random index into the names array
    int index = rand() % num_names;

    // Print the selected name in the desired format
    printf("%s, would you please answer the question?\n", names[index]);

    return 0;
}

