#include<stdio.h>
int main(){

int a=1, b=1, sum=0, n, i;

printf ("Enter the n'th term: ");
scanf ("%d", &n);

for (i=1; i<=n; i++){
    a=b;
    b=sum;
    sum=a+b;
}

printf ("The %dth term of the fibonacci series is: %d", n, sum);

return 0;

}
