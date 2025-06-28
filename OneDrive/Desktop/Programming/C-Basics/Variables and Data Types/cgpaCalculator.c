#include <stdio.h>

int main() {
    float marks[5], total = 0, cgpa;
    printf("Enter marks of 5 subjects (out of 100):\n");

    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    cgpa = (total / 5) / 9.5;

    printf("\nYour CGPA is: %.2f\n", cgpa);

    return 0;
}
