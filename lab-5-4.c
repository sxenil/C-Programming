#include <stdio.h>
int nat_sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + nat_sum(n - 1);
}

int main() {
    int n, sum;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    sum = nat_sum(n);
    printf("Sum: %d", sum);

    return 0;

}