#include <stdio.h>
int main (){
	int n, a[100];
	printf ("Enter the size of the array: ");
	scanf ("%d", &n);
	printf ("Enter the elements of array: ");
	int i;
	for (i=0; i<n;i++);{
	scanf ("%d", &a[i]);
	}
	printf ("Even numbers: \n");
	int i;
	for (i= 0; i<n; i++){
		if (a[i]%2==0)
		printf ("%d", a[i]);
	}
	printf ("Odd number: ");
	int i;
		for (i= 0; i<n; i++){
		if (a[i]%2!=0)
		printf ("%d", a[i]);
	}
	return 0;
	
}
