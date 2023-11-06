#include<stdio.h>
#include<strings.h>
int main()
{
char str[3],i;
printf("Enter your string: ");
gets(str);
i=0;
int count =1;
while(str[i]!='\0'){
if(i=' '){
count++;
}
i++;
count++;
}
printf("The number of words are: %d",count);
return 0;
}
