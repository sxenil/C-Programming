#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,no,value;
	printf("Enter the no. of rows for Pascal Triangle\n");
	scanf("%d",&no);
	printf("The Pascal Triangle is \n");
	for(i=0;i<no;i++)
	{
		for(j=0;j<(no-i);j++)
		{
			printf(" ");
		}
		value=1;
		for(k=0;k<=i;k++)
		{
			printf("%d",value);
			value=(value*(i-k))/(k+1);
		}
		printf("\n");
	}
	return 0;
}
