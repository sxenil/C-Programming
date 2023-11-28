#include<stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3], x, y, z;

    printf("Enter first matrix:\n");
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            scanf("%d", &a[x][y]);
        }
    }

    printf("Enter second matrix:\n");
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            scanf("%d", &b[x][y]);
        }
    }

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            c[x][y] = 0;
            for (z = 0; z < 3; z++) {
                c[x][y] = c[x][y] + a[x][z] * b[z][y];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            printf("%d ", c[x][y]);
        }
        printf("\n");
    }

    return 0;
}