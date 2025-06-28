#include <stdio.h>

int main() {
    char item1[20], item2[20];
    float price1, price2;
    int qty1, qty2;
    float total;

    printf("Enter first item name: ");
    scanf("%s", item1);
    printf("Enter price and quantity of %s: ", item1);
    scanf("%f %d", &price1, &qty1);

    printf("Enter second item name: ");
    scanf("%s", item2);
    printf("Enter price and quantity of %s: ", item2);
    scanf("%f %d", &price2, &qty2);

    total = (price1 * qty1) + (price2 * qty2);

    printf("\n🧾 BILL SUMMARY 🧾\n");
    printf("%s - ₹%.2f x %d = ₹%.2f\n", item1, price1, qty1, price1 * qty1);
    printf("%s - ₹%.2f x %d = ₹%.2f\n", item2, price2, qty2, price2 * qty2);
    printf("Total Amount = ₹%.2f\n", total);

    return 0;
}
