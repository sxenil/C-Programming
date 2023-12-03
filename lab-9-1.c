#include <stdio.h>
int main() {
FILE *source, *dest;
char ch;
printf("Enter source file name: ");
source = fopen(gets("hi.txt"), "r");
printf("Enter destination file name: ");
dest = fopen(gets("hlo.txt"), "a");
while ((ch = fgetc(source)) != EOF) {
fputc(ch, dest);
}
fclose(source);
fclose(dest);
printf("File contents copied successfully.\n");
return 0;
}