#include<stdio.h>
int main (){

int r=0,ld,n;

printf ("Enter the number: ");
scanf ("%d", &n);

while (n>0) {
    r=r*10;
    r=r+(n%10);
    n=n/10;
}

printf ("%d", r);

return 0;

}
