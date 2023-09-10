#include<stdio.h>
#include<math.h>
int main (){

float l_amt, int_rate, l_term, mnthly_mrtg;

printf ("Enter the loan amount: ");
scanf ("%f", &l_amt);

printf ("Enter the interest rate: ");
scanf ("%f", &int_rate);

printf ("Enter the loan term: ");
scanf ("%f", &l_term);

mnthly_mrtg= l_amt*int_rate*(pow(1+int_rate,l_term)/(pow(1+int_rate,l_term)-1));

printf ("The monthly mortgage is: %f", mnthly_mrtg);

return 0;

}