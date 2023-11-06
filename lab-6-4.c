#include<stdio.h>
int main (){
	int n;
	printf ("Enter order of matrix: ");
	scanf ("%d", &n);
	int arr[n][n], i, j, sum= 0;
	printf ("Enter your matrix elements: ");
	for (i= 0; i<n; i++){
		for (j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for(j=0; j<n;j++){
			
			if (i==j){
			sum+=arr[i][j];
			}
		}
	}
	printf ("The sum of right diagonal: %d", sum);
	return 0;
}
