//Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], product[r1][c2];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++)
                product[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
