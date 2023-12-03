#include <stdio.h>
struct Cricketer {
    char name[50];
    int age;
    int testMatches;
    float averageRuns;
};

int main() {
	int i;
    struct Cricketer cricketers[2];

    for (i = 0; i < 2; ++i) {
        printf("Enter details for cricketer #%d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", cricketers[i].name);
        
        printf("Age: ");
        scanf("%d", &cricketers[i].age);

        printf("Number of test matches: ");
        scanf("%d", &cricketers[i].testMatches);

        printf("Average runs per test match: ");
        scanf("%f", &cricketers[i].averageRuns);
    }

    printf("\nRecords of cricketers:\n");
    printf("------------------------------------------------------------------------\n");
    printf("Name          | Age     | Test Matches      | Average Runs          ");
    printf("------------------------------------------------------------------------\n");
    
    for (i = 0; i < 2; ++i) {
        printf("%s          |%d     |%d      |%f          \n", cricketers[i].name, cricketers[i].age,
               cricketers[i].testMatches, cricketers[i].averageRuns);
    }

    printf("------------------------------------------------------------------------\n");

    return 0;
}