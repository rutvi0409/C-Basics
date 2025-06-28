#include <stdio.h>

int main() {
    float food, transport, shopping, total;

    printf("Enter amount spent on food: ₹");
    scanf("%f", &food);

    printf("Enter amount spent on transport: ₹");
    scanf("%f", &transport);

    printf("Enter amount spent on shopping: ₹");
    scanf("%f", &shopping);

    total = food + transport + shopping;

    printf("\n Your Total Expenses Today:\n");
    printf("Food      : ₹%.2f\n", food);
    printf("Transport : ₹%.2f\n", transport);
    printf("Shopping  : ₹%.2f\n", shopping);
    printf("——————————————\n");
    printf("Total     : ₹%.2f\n", total);

    return 0;
}
