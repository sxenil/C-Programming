#include<stdio.h>
#include<string.h>

int main(){

int c1=0,c2=0,c3=0,n;
printf("Enter a string: ");
char str[200];
gets(str);
char *p=&str[0];

while(*p!='\0'){

if ((*p>=97 && *p<=122) || (*p>=65 && *p<=90))
c1++;

else if (*p>=48 && *p<=57)
c2++;

else
c3++;

p++;

};

printf("No of alphabets: %d\n",c1);
printf("No of digits: %d\n",c2);
printf("No of special characters: %d \n",c3);

return 0;

}