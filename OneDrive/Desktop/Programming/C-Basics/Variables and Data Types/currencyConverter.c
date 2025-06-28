#include <stdio.h>

int main() {
    int choice;
    float amount, converted;

    printf("Currency Converter\n");
    printf("1. ₹ to $\n2. $ to ₹\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter amount in ₹: ");
        scanf("%f", &amount);
        converted = amount / 83.00; // Example conversion rate
        printf("₹%.2f = $%.2f\n", amount, converted);
    } else if(choice == 2) {
        printf("Enter amount in $: ");
        scanf("%f", &amount);
        converted = amount * 83.00;
        printf("$%.2f = ₹%.2f\n", amount, converted);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
