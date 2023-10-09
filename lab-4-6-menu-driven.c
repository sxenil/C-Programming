#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i,t,f,p,product=1,prime,flag=0,en,q;
	printf("Choose one of the following by entering the number code : \n");
	printf("1. Factorial of a number \n");
	printf("2. Prime number or not\n");
	printf("3. Odd/Even check\n");
	printf("4. Exit\n");
	for(t=1;t<=4;t++)
	{
		printf("Please Enter the Required Number code --- ");
	scanf("%d",&i);
	printf("\n");
		switch(i)
		{
		     case 1:
	    printf("Enter the number whose factorial you want ---");
	    scanf("%d",&f);
	    printf("\n");
	    for(p=1;p<=f;p++)
	    {
	    	product=product*p;
	    }
	    printf("The Factorial is --- %d",product);
	    printf("\n");
	    break;
	    case 2:
	    printf("Enter a number to check for prime or not --- ");
	    scanf("%d",&prime);
	    for(q=2;q<prime;q++)
	    {
	    	if(prime%q==0)
	    	{
	    		printf("The number is not Prime \n");
	    		flag=1;
	    		break;
	    	}
	    }
	    if(flag=0)
	    {
	    	printf("The number is Prime \n");
	    }
	    printf("\n");
	    break;
	    case 3:
	    printf("Enter a number --- ");
	    scanf("%d",&en);
	    if(en%2==0)
	    {
	    	printf("The number is even \n");
	    }
	    else
	    printf("The number is odd \n");
	    printf("\n");
	    break;
	    case 4:
	    abort();
		}
	}    	
}
