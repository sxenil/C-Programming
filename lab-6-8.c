#include<stdio.h>
#include<string.h>
int main(){
char str[30];
int j,k,max=0,freq;
char ch;
printf("Enter your string: ");
    gets(str);
    int i=0;
int count =1;
while(str[i]!='\0'){
i++;
count++;
}
for(j=0;j<count;j++){
freq=1;
for(k=0;k<j;k++){
if(str[j]==str[k]){
freq++;
}
}
if(freq>=max){
max=freq;
ch=str[j];
}
}
printf("The max frequency of the string is %d and the character is %c",max,ch);
return 0;
}
