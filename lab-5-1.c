#include <stdio.h>
int even_odd(int num){
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (even_odd(number)) {
        printf("%d is even.", number);
    } 
    
    else {
        printf("%d is odd.", number);
    }

    return 0;
}