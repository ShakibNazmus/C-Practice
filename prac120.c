#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int col_num;
    printf("Enter the column number to compute the sum: ");
    scanf("%d", &col_num);

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][col_num];
    }

    printf("The sum of column %d is %d\n", col_num, sum);

    return 0;
}
