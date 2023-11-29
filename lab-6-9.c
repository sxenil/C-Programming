#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i, count = 1;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            count++;
        }
        i++;
    }

    printf("The number of words are: %d\n", count);

    return 0;
}
