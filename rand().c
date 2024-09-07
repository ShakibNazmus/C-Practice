#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NAMES 12
#define MAX_NAME_LENGTH 30

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH+1];
    int num_names = 0;

    // Read in names from stdin
    printf("Enter the names of the students (one per line):\n");
    while (num_names < MAX_NAMES && fgets(names[num_names], MAX_NAME_LENGTH+1, stdin)) {
        // Remove trailing newline character
        names[num_names][strcspn(names[num_names], "\n")] = '\0';
        num_names++;
    }

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Randomly select a name
    int index = rand() % num_names;

    // Print out the selected student name
    char first_name[MAX_NAME_LENGTH+1], last_name[MAX_NAME_LENGTH+1];
    sscanf(names[index], "%s %s", first_name, last_name);
    printf("%c%s %c%s, would you please answer the question?\n",
        toupper(first_name[0]), first_name + 1, toupper(last_name[0]), last_name + 1);

    return 0;
}

