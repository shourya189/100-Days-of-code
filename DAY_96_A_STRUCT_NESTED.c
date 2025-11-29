/*Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int id;
    struct Date {
    int day;
    int month;
    int year;
    }d;
};
int main() {
    struct Employee emp;
    printf("Enter name: ");
    fgets(emp.name,sizeof(emp.name),stdin);
    emp.name[strcspn(emp.name,"\n")]=0;
    printf("Enter your id: ");
    scanf("%d",&emp.id);
    printf("Enter joining date in DD MM YYYY: ");
    scanf("%d %d %d",&emp.d.day,&emp.d.month,&emp.d.year);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", emp.name, emp.id, emp.d.day, emp.d.month, emp.d.year);
}
   
