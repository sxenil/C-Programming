#include <stdio.h>
int factorial(int n) {
    int p=1;
    for(int i=1;i<=n;i++)
    p=p*i;
    return p;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int fact=factorial(n);
    printf("Factorial: %d",fact);
    
    return 0;
}