#include <stdio.h>
int main() {
FILE *source, *dest;
char ch;
printf("Enter source file name: ");
source = fopen(gets(""), "r");
printf("Enter destination file name: ");
dest = fopen(gets(""), "a");
while ((ch = fgetc(source)) != EOF) {
fputc(('a' <= ch && ch <= 'z') ? ch - 'a' + 'A' : ch, dest);
}
fclose(source);
fclose(dest);
printf("File contents appended with uppercase conversion.\n");
return 0;
}