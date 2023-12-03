#include <stdio.h>
#include <string.h>
void reversePrint(FILE *f) {
char w[11];
while (fscanf(f, "%10s", w) != EOF) for (int i = strlen(w) - 1; i >= 0; i--) printf("%c", w[i]);
}
int main() {
FILE *in;
char i[100];
printf("Enter input file: ");
scanf("%s", i);
in = fopen(i, "r"); if (in == NULL) return 1;
reversePrint(in);
fclose(in);
return 0;
}