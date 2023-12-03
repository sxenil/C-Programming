#include <stdlib.h>
#include<stdio.h>
#include<string.h>

// Structure to represent date using bit fields
struct Date {
    unsigned int day : 5;   // 5 bits for day
    unsigned int month : 4; // 4 bits for month
    unsigned int year : 12; // 12 bits for year
};

// Structure to represent employee with a birthdate
struct Employee {
    char name[50];
    struct Date birthdate;
};

// Function to compare birthdates for sorting
int compareDates(const void *a, const void *b) {
    const struct Employee *empA = (const struct Employee *)a;
    const struct Employee *empB = (const struct Employee *)b;

    // Comparing birth years
    if (empA->birthdate.year != empB->birthdate.year) {
        return empA->birthdate.year - empB->birthdate.year;
    }

    // Comparing birth months
    if (empA->birthdate.month != empB->birthdate.month) {
        return empA->birthdate.month - empB->birthdate.month;
    }

    // Comparing birth days
    return empA->birthdate.day - empB->birthdate.day;
}

int main() {
int d,b,c;
char a[50];
    const int numEmployees = 10;
    struct Employee employees[numEmployees];

    // Input birthdate information for each employee
    for (int i = 0; i < numEmployees; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", a);
        strcpy(employees[i].name,a);
      printf("Birthdate (Day Month Year): ");
        scanf("%u %u %u", &b, &c,&d);
    employees[i].birthdate.day=b;
    employees[i].birthdate.month=c;
    employees[i].birthdate.year=d;
    }
    

    // Sorting employees based on birthdate
    qsort(employees, numEmployees, sizeof(struct Employee), compareDates);

    // Printing employees in ascending order of birthdate
    printf("\nEmployees sorted by birthdate:\n");
    for (int i = 0; i < numEmployees; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Birthdate: %u-%u-%u\n", employees[i].birthdate.day, employees[i].birthdate.month, employees[i].birthdate.year);
        printf("\n");
    }

    return 0;
}