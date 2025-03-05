#include <stdio.h>

void matrixMultiplication(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0; // Initialize result cell
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j]; // Multiply and sum
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of the first matrix
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions of the second matrix
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Validate multiplication rules
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 0;
    }

    int mat1[10][10], mat2[10][10], res[10][10];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Perform matrix multiplication
    matrixMultiplication(mat1, mat2, res, r1, c1, c2);

    // Print the result
    printf("Resultant matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}


