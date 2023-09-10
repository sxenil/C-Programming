#include <stdio.h>
int main (){

printf ("Earnings: \n\n");

float b_pay, hra, dra, mda, it, od, total_earning, total_deduc, net_sal;

printf ("Basic pay: ");
scanf ("%f", &b_pay);

printf ("House rent allowance: ");
scanf ("%f", &hra);

printf ("Dearness allowance: ");
scanf ("%f", &dra);

printf ("Medical allowance: ");
scanf ("%f", &mda);

total_earning= b_pay + hra + dra + mda;

printf ("\n\nGross salary: %f", total_earning);

printf ("\n\nDeductions: \n\n");

printf ("Income tax: ");
scanf ("%f", &it);

printf ("Other deductions: ");
scanf ("%f", &od);

total_deduc= it + od;

printf ("\nGross deduction: %f", total_deduc);

net_sal= total_earning - total_deduc;

printf ("\n\nNet salary: %f", net_sal);

return 0;

}