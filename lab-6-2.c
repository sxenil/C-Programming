#include <stdio.h>

int main() {
    
    int numbers[10]; 
    int evenNumbers[10];
    int oddNumbers[10];
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter 10 integers: ");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            evenNumbers[evenCount++] = numbers[i];
        } 
        
        else {
            oddNumbers[oddCount++] = numbers[i];
        }
    }

    printf("Even numbers: ");

    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenNumbers[i]);
    }

    printf("\nOdd numbers: ");

    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddNumbers[i]);
    }

    printf("\n");

    return 0;

}