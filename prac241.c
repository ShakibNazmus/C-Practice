#include <stdio.h>

int findLastOccurrence(char s[], char ch) {
    int i, lastOccurrence = -1;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            lastOccurrence = i;
        }
    }
    return lastOccurrence;
}

int main() {
    char s[20], ch;
    printf("Enter string: ");
    gets(s);
    printf("Enter character to find: ");
    scanf("%c", &ch);

    int lastOccurrence = findLastOccurrence(s, ch);

    if (lastOccurrence == -1) {
        printf("Character not found.\n");
    } else {
        printf("%c last occurs at index %d.\n", ch, lastOccurrence);
    }

    return 0;
}

