#include <stdio.h>
int clacsum(int n1, int n2, int n3, int n4, int n5) {
    return n1 + n2 + n3 + n4 + n5;
}

int avg(int n1, int n2, int n3, int n4, int n5) {
    int sum = clacsum(n1, n2, n3, n4, n5);
    return (int)sum / 5;
}

int main() {
    int n1, n2, n3, n4, n5;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    int sum = clacsum(n1, n2, n3, n4, n5);
    int average = avg(n1, n2, n3, n4, n5);

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", average);

    return 0;
}