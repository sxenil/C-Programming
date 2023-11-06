#include<stdio.h>
#include<string.h>
int main(){
    char str[20],ans[20];
     printf("Enter your string:");
    scanf("%[^\n]",str);
    int i=0;
    int x=0;
    while(i<20){
        if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && (str[i+3]== ' '||str[i+3]== '\0')){
            i=i+4 ;
        }
        else{
            ans[x]=str[i];
            x++;
            i++;
        }
    }
    ans[x]='\0';
   printf("%s",ans);
    return 0;
}
