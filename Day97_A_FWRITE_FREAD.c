// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int  id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int n, i;

    /* Writing records to binary file */
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("How many employees? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &e.id);
        printf("Name: ");
        scanf("%s", e.name);
        printf("Salary: ");
        scanf("%f", &e.salary);

        /* write one structure record to file */
        fwrite(&e, sizeof(struct Employee), 1, fp);
    }

    fclose(fp);

    /* Reading records from binary file */
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nEmployee details read from file:\n");
    printf("ID\tName\tSalary\n");

    /* fread returns number of items read; loop until it is 1 */
    while (fread(&e, sizeof(struct Employee), 1, fp) == 1) {
        printf("%d\t%s\t%.2f\n", e.id, e.name, e.salary);
    }

    fclose(fp);
    return 0;
}
