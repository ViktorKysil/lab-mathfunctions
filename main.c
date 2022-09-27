#include <stdio.h>
#include <stdlib.h>

#define Name "Viktor"
#define LastName "Kysil"
#define GroupName "RE-21"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

int main()
{
    unsigned int semester;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    double averageGrade;
    unsigned int age;

    // enter user's name, last name
    printf("%s %s Enter following data.\n", Name, LastName);

    // enter user's semester
    printf("Enter semester: ");
    scanf("%u", &semester);

    // enter user's admission score
    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);

    // enter user's grade #1
    printf("Enter grade #1: ");
    scanf("%d", &grade1);

    // enter user's grade #2
    printf("Enter grade #2: ");
    scanf("%d", &grade2);

    // enter user's grade #3
    printf("Enter grade #3: ");
    scanf("%d", &grade3);

    // enter user's grade #4
    printf("Enter grade #4: ");
    scanf("%d", &grade4);

    // enter user's grade #5
    printf("Enter grade #5: ");
    scanf("%d", &grade5);

    // enter user's age
    printf("Enter your age: ");
    scanf("%u", &age);

    // calculate the mean of grades
    averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5) / 5;

    // clear console
    system("cls");

    // output
    printf("***************\n===============\n");
    printf("%s", University);
    printf("\nFaculty: %s", Faculty);
    printf("\nGroup: %s", GroupName);
    printf("\n---------------");
    printf("\nstudent: %s %s", Name, LastName);
    printf("\nage: %u", age);
    printf("\nsemester: %u", semester);
    printf("\n---------------");
    printf("\nadmission score: %.1f", admissionScore);
    printf("\naverage grade = %.2lf", averageGrade);
    printf("\n");

    return 0;
}

