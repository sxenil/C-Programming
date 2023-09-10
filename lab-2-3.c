#include <stdio.h>
int main (){

printf ("Earnings: \n\n");

float b_pay, oa, it, total_earning, net_sal;

printf ("Basic pay: ");
scanf ("%f", &b_pay);

printf ("Other allowances: ");
scanf ("%f", &oa);

total_earning= b_pay + oa;

printf ("\n\nGross salary: %f", total_earning);

printf ("\n\nDeductions: \n\n");

printf ("Income tax: ");
scanf ("%f", &it);

printf ("\nGross deduction: %f", it);

net_sal= total_earning - it;

printf ("\n\nNet salary: %f", net_sal);

return 0;

}
