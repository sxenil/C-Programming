#include <stdio.h>

void revArr(int *arr, int size) {
    for (int *start = arr, *end = arr + size - 1; start < end; start++, end--) {
        int temp = *start;
        *start = *end;
        *end = temp;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    revArr(arr, size);

    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
    
}