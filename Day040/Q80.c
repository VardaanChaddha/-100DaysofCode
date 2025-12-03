#include <stdio.h>
/*Q80: Multiply two matrices.*/

int main() {
    int a, b, d, e;
    printf("Please make sure that the columns of the first and rows of second matrix match each other\n\n");
    
    printf("Enter number of rows in first matrix: ");
    scanf("%d", &a);
    printf("Enter number of columns in first matrix: ");
    scanf("%d", &b);
    
    printf("Enter number of rows in second matrix: ");
    scanf("%d", &d);
    printf("Enter number of columns in second matrix: ");
    scanf("%d", &e);

    if (b != d) {
        printf("Matrix multiplication not possible! Columns of first ≠ rows of second.\n");
        return 0;
    }

    int A[a][b], B[d][e], C[a][e];

    printf("\nEnter elements of first matrix (A):\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of second matrix (B):\n");
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < e; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < e; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < a; i++) {         
        for (int j = 0; j < e; j++) {      
            for (int k = 0; k < b; k++) {  
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResultant Matrix (A * B):\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < e; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}