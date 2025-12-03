#include <stdio.h>
/*Q79: Perform diagonal traversal of a matrix.*/
    int main() {
    int a, b;
    printf("Enter number of rows: ");
    scanf("%d", &a);
    printf("Enter number of columns: ");
    scanf("%d", &b);

    int c[a][b];

    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter c[%d][%d]: ", i, j);
            scanf("%d", &c[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    int row = 0, col = 0;
    int up = 1;

    for (int k = 0; k < a * b; k++) {
        printf("%d ", c[row][col]);

        if (up) {
            if (col == b - 1) {
                row++;
                up = 0;
            } else if (row == 0) {
                col++;
                up = 0;
            } else {
                row--;
                col++;
            }
        } else {
            if (row == a - 1) {
                col++;
                up = 1;
            } else if (col == 0) {
                row++;
                up = 1;
            } else {
                row++;
                col--;
            }
        }
    }

    return 0;
}