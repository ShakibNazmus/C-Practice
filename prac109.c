#include <stdio.h>

int main() {
    double arr[100];
    int i;

    // Fill the array with fractions
    for(i = 0; i < 100; i++) {
        arr[i] = (double)(i + 1) / (i + 2);
    }

    // Print the array
    for(i = 0; i < 100; i++) {
        printf("%d: %f\n", i, arr[i]);
    }

    return 0;
}

