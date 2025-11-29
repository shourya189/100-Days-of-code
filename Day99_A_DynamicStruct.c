// Day 99 - A149 (Enum)
// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee *e = (struct Employee*)malloc(sizeof(struct Employee));
    if (e == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", e->name);
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter salary: ");
    scanf("%f", &e->salary);

    printf("\nEmployee Details:\nName: %s\nID: %d\nSalary: %.2f\n", e->name, e->id, e->salary);

    free(e);
    return 0;
}
