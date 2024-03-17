#include<stdio.h>

int main() {
    char *departments[] = {"Marketing", "Management", "Sales", "Designing"};
    char *designations[] = {"Manager", "Supervisor", "Security Officer", "Clerk"};

    int employeeId, deptNo;
    char designationCode;

    printf("Employee Id: ");
    scanf("%d", &employeeId);

    printf("Dept No: ");
    scanf("%d", &deptNo);

    printf("Designation Code: ");
    scanf(" %c", &designationCode); // Added space before %c

    if (deptNo < 10 || deptNo > 40 || designationCode < 'A' || designationCode > 'D') {
        // Handle invalid input
        printf("Invalid department number or designation code.\n");
    }
    else {
        // Handle valid input
        printf("Employee Id: %d\n", employeeId);
        printf("Department: %s\n", departments[deptNo - 1]);
        printf("Designation: %s\n", designations[designationCode - 'A']);
    }

    return 0;
}

