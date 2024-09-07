#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{

    char names[12][30];

    int num_names = 0;
    printf("Enter names : ");
    while (num_names < 12) {

        fgets(names[num_names], 12, stdin);

        names[num_names][strcspn(names[num_names], "\n")] = '\0';
        num_names++;
    }


    srand(time(NULL));


    int index = rand() % num_names;


    printf("%s, would you please answer the question?\n", names[index]);

    return 0;
}
