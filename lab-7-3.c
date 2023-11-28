#include<stdio.h>
void fun(int* x) {
    int i;
    for (i = 0; i < 3; i++) {
        int temp = *(x + i);
        *(x + i) = *(x + 4 - i);
        *(x + 4 - i) = temp;
    }
    return;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}, i;
    fun(arr);
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
    
}