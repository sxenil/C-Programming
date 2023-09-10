#include<stdio.h>
int main() {

float inr, usd, euro;

printf ("Enter INR amount: ");
scanf ("%f", &inr);
usd= inr*0.012;
printf ("%f INR= %f USD", inr, usd);

printf ("\n\nEnter USD amount: ");
scanf ("%f", &usd);
inr= usd*83.12;
printf ("%f USD= %f INR", usd, inr);

printf ("\n\nEnter EURO amount: ");
scanf ("%f", &euro);
inr= euro*89.06;
printf ("%f INR= %f USD", euro,inr);

return 0;

}