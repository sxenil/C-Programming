#include <stdio.h>
int main (){
	int a[25], i, max;
	int size=25;
	printf ("Enter 25 intgers: ");
	for (i= 0; i<size; i++){
		scanf ("%d", &a[i]);
	}
	max= a[0];
	for (i=0; i<size; i++){
		if (a[i]>max){
			max= a[i];
		}
	}
	printf ("Maximum value of array: %d", max);
	return 0;
} 
