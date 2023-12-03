#include <stdio.h>
int main() {
FILE *file;
char fileName[100];
char line[100];
int lineNumber = 1;
// Get file name
printf("Enter the file name: ");
scanf("%s", fileName);
// Open file in read mode
file = fopen(fileName, "r");
if (file == NULL) {
printf("Error opening file.\n");
return 1;
}
// Read and display contents with line numbers
while (fgets(line, sizeof(line), file) != NULL) {
printf("%d: %s", lineNumber, line);
lineNumber++;
}
// Close file
fclose(file);
return 0;
}