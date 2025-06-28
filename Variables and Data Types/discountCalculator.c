#include <stdio.h>

int main() {
    float price, discount, finalAmount;

    printf("Enter the total price: ₹");
    scanf("%f", &price);

    if(price >= 5000) discount = 20;
    else if(price >= 3000) discount = 15;
    else if(price >= 1000) discount = 10;
    else discount = 5;

    finalAmount = price - (price * discount / 100);

    printf("You got a %.0f%% discount!\n", discount);
    printf("Final amount to pay: ₹%.2f\n", finalAmount);

    return 0;
}
