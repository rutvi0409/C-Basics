#include <stdio.h>

int main() {
    char items[5][20] = {"Milk", "Bread", "Butter", "Rice", "Sugar"};
    float prices[5] = {45.0, 25.0, 80.0, 60.0, 40.0};
    int quantity[5];
    float total = 0;

    printf("Welcome to Mini Mart!\n");
    printf("Items available:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d. %s - ₹%.2f\n", i+1, items[i], prices[i]);
    }

    printf("\nEnter quantity for each item:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: ", items[i]);
        scanf("%d", &quantity[i]);
        total += prices[i] * quantity[i];
    }

    printf("\n--- BILL RECEIPT ---\n");
    for (int i = 0; i < 5; i++) {
        if (quantity[i] > 0)
            printf("%s x %d = ₹%.2f\n", items[i], quantity[i], prices[i] * quantity[i]);
    }
    printf("Total Amount = ₹%.2f\n", total);

    return 0;
}
