#include <stdio.h>
#include <string.h>

int main() {
    char *str[] = {"apple", "banana", "cherry", "date", "orange"};
    char str1[100], str2[100];

    printf("Enter str1: ");
    scanf("%s", str1);

    printf("Enter str2: ");
    scanf("%s", str2);

    int found = 0;

    for (int i = 0; i < 5; i++) {
        char *foundPosition = strstr(str[i], str1);
        if (foundPosition != NULL) {
            strcpy(foundPosition, str2);
            found = 1;
            break;
        }
    }

    if (found) {
        printf("After replacement:\n");
        for (int i = 0; i < 5; i++) {
            printf("%s\n", str[i]);
        }

    }
    
    else {
        printf("%s not found in any strings.\n", str1);
    }

    return 0;

}