#include <stdio.h>
int main() {
    
    int numbers[5], smallest;

    printf("Enter 25 integers:");
    for (int i = 0; i < 5; scanf("%d", &numbers[i++]));

    smallest = numbers[0];
    for (int i = 1; i < 5; i++)
        smallest = (numbers[i] < smallest) ? numbers[i] : smallest;

    printf("The smallest number is: %d", smallest);

    return 0;

}