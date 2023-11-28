#include<stdio.h>
#include<string.h>

int main() {
    char s[] = {"Hey! My name is Swapnil"
    };

    puts(s);

    char *ptr = s;
    int k = strlen(s) - 1;

    for (int i = 0; i < k / 2; i++) {
        char t = *(ptr + i);
        *(ptr + i) = *(ptr + k - i);
        *(ptr + k - i) = t;
    }

    printf("The Reversed String:\n");
    puts(s);

    return 0;

}