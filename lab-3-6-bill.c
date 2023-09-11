#include <stdio.h>

int main(){
	char name;
	int custid;
	float cunits,bill,amt;
	
	printf("Enter your name:");
	scanf("%c",&name);
	printf("Enter your Customer ID:");
	scanf("%d",&custid);
	printf("Enter the reading:");
	scanf("%f",&cunits);
	
	if(cunits<=199){
		bill=cunits*1.20;
		printf("The bill amount is %f",bill);
	}
	
	else if((cunits>199)&&(cunits<=399)){
		bill=cunits*1.50;
		printf("The bill amount is %f",bill);
}
	else if((cunits>399)&& (cunits<=599)){
	
		bill=cunits*1.80;
		printf("The bill amount is %f",bill);}
	else{
	
	    bill=cunits*2.00;
		printf("The bill amount is %f",bill);
}

    if(bill>400){
    	amt=bill+((15*bill)/100);
    	printf("The bill amount after penalty is %f",amt);
    	
	}
	else if(bill<100){
	     printf("There is no amount to be paid");
	}
	    
}
