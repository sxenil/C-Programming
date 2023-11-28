#include<stdio.h>
int main(){

        int arr[2][2]={1,2,3,4},brr[2][2]={0,9,8,7},j,k,l,m;
        int (*x)[2]=arr;
        int (*y)[2]=brr;
        int i=0;

        while(i<4){
        int temp=(*x)[i];
        (*x)[i]=(*y)[i];
        (*y)[i]=temp;
        i++;
        }

     for(m=0;m<=1;m++){
        for( j=0;j<=1;j++){
            printf("%d ",arr[m][j]);
        }
        printf("\n");
    }

    printf("\n");

    for( k=0;k<=1;k++){
        for( l=0;l<=1;l++){
            printf("%d ",brr[k][l]);
        }

        printf("\n");
    }
    
    return 0;

}