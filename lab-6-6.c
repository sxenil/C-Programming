#include<stdio.h>
int main(){
    int arr[10],hash[10]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter the attendance:");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        int x=arr[i];
        hash[x-1]=1;
    }
    for(int i=0;i<10;i++){
        if(hash[i]==0){
            printf("%d ",i+1);
        }
    }

     return 0;
 }
