#include<stdio.h>
int main(){
	
	int a,b,c;
	
	printf ("Enter the first angle: ");
	scanf ("%d", &a);
	
	printf ("Enter the second angle: ");
	scanf ("%d", &b);
	
	printf ("Enter the third angle: ");
	scanf ("%d", &b);
	int sum= a+b+c;
	//printf ("It is an Equilateral triangle");
	if (sum == 180){
		printf ("It is an Equilateral triangle");
		if (a==60 && b==60 && c==60){
			printf ("It is an Equilateral triangle");
		}
		
		else if ((a==b) && (a!=c)){
			printf ("It is an Isoceles triangle");
		}
		
		else if ((b==c) && (b!=a)){
			printf ("It is an Isoceles triangle");
		}
		
		else if ((c==a) && (c!=b)){
			printf ("It is an Isoceles triangle");
		}
		
		else {
			printf ("It is a scalane triangle");
		}
		
	}
	
	return 0;
	
}
