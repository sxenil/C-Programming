#include <stdio.h>
int sq_area(int side){
    return side * side;
}

int main() {

    int side, area;

    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);

    area = sq_area(side);
    printf("Area: %d", area);

    return 0;
    
}