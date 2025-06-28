#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float math, science, english, total, average;

    printf("Enter student name: ");
    gets(name);
    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks in Math: ");
    scanf("%f", &math);
    printf("Enter marks in Science: ");
    scanf("%f", &science);
    printf("Enter marks in English: ");
    scanf("%f", &english);

    total = math + science + english;
    average = total / 3;

    printf("\n--- Marksheet ---\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Total Marks: %.2f\n", total);
    printf("Average: %.2f\n", average);

    if (average >= 90) printf("Grade: A+\n");
    else if (average >= 75) printf("Grade: A\n");
    else if (average >= 60) printf("Grade: B\n");
    else printf("Grade: C or below\n");

    return 0;
}
