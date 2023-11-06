#include<stdio.h>
int main()
{int k,n,p;
printf("ENTER NUMBER OF ELEMENTS\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements of array\n");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
int min=arr[0];
for(int j=0;j<n;j++)
{for(int k=j+1;k<n;k++)
{if(min>arr[k])
{int t=min;
min=arr[k];
arr[k]=t;
}}}
printf("enter a number");
scanf("%d",&p);
if(p==1)
{printf("THE %dst largest number:%d\n",p,arr[0]);
printf("THE %dst smallest number:%d",p,arr[n-1]);}
else if(p==2)
{printf("THE %dnd largest number:%d\n",p,arr[1]);
printf("THE %dnd smallest number:%d",p,arr[n-2]);}
else if(p==3)
{printf("THE %drd largest number:%d\n",p,arr[2]);
printf("THE %drd smallest number:%d",p,arr[n-3]);}
else
{printf("THE %dth largest number:%d\n",p,arr[p-1]);
printf("THE %dth smallest number:%d",p,arr[n-p+1]);}
}
return 0;
}
