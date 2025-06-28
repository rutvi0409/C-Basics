#include <stdio.h>

int main() {
    float basicSalary, hra, da, gross, tax, net;

    printf("Enter Basic Salary (₹): ");
    scanf("%f", &basicSalary);

    hra = basicSalary * 0.2; 
    da = basicSalary * 0.1; 
    gross = basicSalary + hra + da;
    tax = gross * 0.05;      
    net = gross - tax;

    printf("\n🧾 Salary Slip 🧾\n");
    printf("Basic Salary: ₹%.2f\n", basicSalary);
    printf("HRA: ₹%.2f\n", hra);
    printf("DA: ₹%.2f\n", da);
    printf("Gross Salary: ₹%.2f\n", gross);
    printf("Tax Deducted: ₹%.2f\n", tax);
    printf("Net Salary: ₹%.2f\n", net);

    return 0;
}
