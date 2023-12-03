#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void replaceWords(FILE *src, FILE *dest) {
char word[100];
while (fscanf(src, "%s", word) != EOF) fprintf(dest, strcmp(word, "a") == 0 || strcmp(word, "the") == 0 || strcmp(word, "an") == 0 ? " " : "%s ", word);
}
int main() {
FILE *in, *out;
char i[100], o[100];
printf("Enter input file: "); scanf("%s", i);
in = fopen(i, "r"); if (in == NULL) return 1;
printf("Enter output file: "); scanf("%s", o);
out = fopen(o, "w"); if (out == NULL) { fclose(in); return 2; }
replaceWords(in, out);
fclose(in);
fclose(out);
printf("Words replaced and written to the target file.\n");
return 0;
}