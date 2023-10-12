#include <stdio.h>
int factorial(int n){
    int p=1;
    if(n!=0){
        p=p*n*factorial(n-1);
    }
    
else{
    return p;
    }
}

int main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d",&n);

    int a= factorial(n);
    printf("Factorial: %d", a);
    
    return 0;
}