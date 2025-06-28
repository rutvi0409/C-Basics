#include <stdio.h>

int main() {
    float balance = 5000.0;
    int pin = 1234, enteredPin, choice;
    float amount;

    printf("Welcome to Simple ATM\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access Denied!\n");
        return 0;
    }

    do {
        printf("\n---- ATM Menu ----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: ₹%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount deposited successfully!\n");
                break;
            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount > balance)
                    printf("Insufficient balance!\n");
                else {
                    balance -= amount;
                    printf("Withdrawn successfully!\n");
                }
                break;
            case 4:
                printf("Thank you for using our ATM! ✨\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
