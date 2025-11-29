/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>
#include <string.h>
struct student{
    char name[50];
   int rollno;
    int marks;
};
int main(){
    struct student s1;
    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = 0; 
    printf("Enter Roll: ");
    scanf("%d", &s1.rollno);
    printf("Enter Marks: ");
    scanf("%d", &s1.marks); 
    printf("Name: %s | Roll: %d | Marks: %d\n", s1.name, s1.rollno, s1.marks);
    return 0;
}
