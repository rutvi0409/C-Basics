#include <stdio.h>

int main() {
    char name[30];
    int empId;
    float basic, hra, da, gross;

    printf("Enter Employee Name: ");
    gets(name);

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Basic Salary (₹): ");
    scanf("%f", &basic);

    hra = basic * 0.20;  // 20% of basic
    da = basic * 0.10;   // 10% of basic
    gross = basic + hra + da;

    printf("\n--- Salary Slip ---\n");
    printf("Name: %s\n", name);
    printf("Emp ID: %d\n", empId);
    printf("Basic: ₹%.2f\n", basic);
    printf("HRA: ₹%.2f\n", hra);
    printf("DA: ₹%.2f\n", da);
    printf("Gross Salary: ₹%.2f\n", gross);

    return 0;
}
