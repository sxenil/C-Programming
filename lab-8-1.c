#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yoj;
};

void studdept(struct Student students[], int n, const char Department[]) {
    printf("Students in the %s department:\n", Department);
    int i;
	 for (i = 0; i < n; ++i) {
        if (strcmp(students[i].department, Department) == 0) {
            printf("%s\n", students[i].name);
        }
    }
}

void studname(struct Student students[], int n, const char Name[]) {
    int i;
	 for (i = 0; i < n; ++i) {
        if (strcmp(students[i].name, Name) == 0) {
            printf("Student Data for %s:\n", Name);
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yoj);
            return;
        }
    }

    printf("Student with name %s not found.\n", Name);
}

int main() {
    struct Student students[] = {
        {101, "John Doe", "Computer Science", "B.Tech", 2020},
        {102, "Jane Smith", "Electrical Engineering", "M.Tech", 2019},
        {103, "Alice Johnson", "Mechanical Engineering", "B.Tech", 2021},
    };

    int numStudents = sizeof(students) / sizeof(students[0]);
    studdept(students, numStudents, "Computer Science");
    printf("\n");
    studname(students, numStudents, "Jane Smith");

    return 0;
}