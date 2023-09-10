#include<stdio.h>
int main(){

float len, wgt,vol,ft,pnd,gal;

printf ("Enter the lenght (in metres): ");
scanf ("%f", &len);
ft= len*3.281;
printf ("Lenght in feets: %f ft", ft);

printf ("\n\nEnter the weight (in kilograms): ");
scanf ("%f", &wgt);
pnd= wgt*2.205;
printf ("Weight in pounds: %f lbs", pnd);

printf ("\n\nEnter the volume (in litres): ");
scanf ("%f", &vol);
gal= vol/3.785;
printf ("Volume in gallons: %f gal", gal);

return 0;

}