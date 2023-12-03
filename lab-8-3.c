#include <stdio.h>
#include <string.h>
struct Employee {
    int empCode;
    char name[50];
    char joinDate[15];
};

int tenure(const char currentDate[], const char joinDate[]) {
    int curyear, curmon, curday, joinYear, joinMonth, joinDay;
    
    sscanf(currentDate, "%d-%d-%d", &curyear, &curmon, &curday);
    sscanf(joinDate, "%d-%d-%d", &joinYear, &joinMonth, &joinDay);

    int years = curyear - joinYear;
    
    if (curmon < joinMonth || (curmon == joinMonth && curday < joinDay)) {
        years--;
    }

    return years;
}

int main() {
    int n,i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];
    for (i = 0; i < n; ++i) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].empCode);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Date of Joining (YYYY-MM-DD): ");
        scanf("%s", employees[i].joinDate);
    }

    char curdate[15];
    printf("\nEnter the current date (YYYY-MM-DD): ");
    scanf("%s", curdate);

    printf("\nEmployees with tenure >= 3 years:\n");
    for (i = 0; i < n; ++i) {
        if (tenure(curdate, employees[i].joinDate) >= 3) {
            printf("%s\n", employees[i].name);
        }
    }

    return 0;
}