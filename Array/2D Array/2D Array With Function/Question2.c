#include <stdio.h>

void process2DArrays(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] * arr2[i][j]; // Example operation: addition
        }
    }
}

int main() {
    int rows, cols;

    // Get the dimensions of the arrays from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr1[rows][cols], arr2[rows][cols], result[rows][cols];

    // Input elements for the first 2D array
    printf("Enter elements of the first 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input elements for the second 2D array
    printf("Enter elements of the second 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Call the function to process the arrays
    process2DArrays(rows, cols, arr1, arr2, result);

    // Print the resultant 2D array
    printf("Resultant 2D array (arr1 + arr2):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n"); // Newline for each row
    }

    return 0;
}
