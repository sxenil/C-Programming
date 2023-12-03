#include <stdio.h>
struct date { int d, m, y; };
struct employee { int empcode[6]; char empname[20]; struct date join_date; float salary; };
int compareDates(struct date date1, struct date date2) {
return (date1.y != date2.y) ? date1.y - date2.y : (date1.m != date2.m) ? date1.m - date2.m : date1.d - date2.d;
}
void sortRecords(struct employee records[], int n) {
for (int i = 0, j; i < n - 1; i++)
for (j = 0; j < n - i - 1; j++)
if (compareDates(records[j].join_date, records[j + 1].join_date) > 0) {
struct employee temp = records[j];
records[j] = records[j + 1];
records[j + 1] = temp;
}
}
int main() {
FILE *in, *out;
char i[100], o[100];
int n;
printf("Enter input file: "); scanf("%s", i);
printf("Enter number of records: "); scanf("%d", &n);
struct employee r[n];
in = fopen(i, "r"); for (int j = 0; j < n; j++) fread(&r[j], sizeof(struct employee), 1, in); fclose(in);
sortRecords(r, n);
printf("Enter output file: "); scanf("%s", o);
out = fopen(o, "w"); for (int j = 0; j < n; j++) fwrite(&r[j], sizeof(struct employee), 1, out); fclose(out);
printf("Records sorted and written to the target file.\n");
return 0;
}