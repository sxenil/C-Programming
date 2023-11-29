#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int matrix1[m][n];
    int matrix2[m][n];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    int areEqual = 1;  

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                areEqual = 0;
break;
}
        }
        
    }

    if (areEqual==1) {
        printf("The two matrices are equal.\n");
    } else {
        printf("The two matrices are not equal.\n");
    }

    return 0;
}