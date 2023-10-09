#include<stdio.h>
int main(){

float x,y,z;

printf ("Enter first number: ");
scanf ("%f", &x);
printf ("\n");

printf ("Enter second number: ");
scanf ("%f", &y);
printf ("\n");

printf ("Enter third number: ");
scanf ("%f", &z);
printf ("\n");

if (x>y && x>z){
    printf ("%f is the greatest among all.", x);
}

else if (y>x && y>z){
    printf ("%f is the greatest among all.", y);
}

else {
    printf ("%f is the greatest among all.", z);
}

    return 0;

}
