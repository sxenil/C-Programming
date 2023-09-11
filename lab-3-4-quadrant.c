#include<stdio.h>
int main (){
	
	float x,y;
	
	printf ("Declare 'x' coordinate: ");
	scanf ("%f", &x);
	
	printf ("Declare 'y' coordinate: ");
	scanf ("%f", &y);
	
	if (x==0 && y==0){
		printf ("The point is at the origin");
	}
	
	else if (x>0 && y>0){
		printf ("The point belongs to I'st quadrant");
	}
	
	else if (x<0 && y>0){
		printf ("The point belongs to II'nd quadrant");
	}
	
	else if (x<0 && y<0){
		printf ("The point belongs to III'rd quadrant");
	}
	
	else if (x>0 && y<0){
		printf ("The point belongs to IV'th quadrant");
	}
	
	return 0;
	
}
