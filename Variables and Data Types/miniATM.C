#include <stdio.h>

int main() {
    int pin, enteredPin, balance = 10000, amount, choice;

    pin = 1234;

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin == pin) {
        do {
            printf("\n1. Check Balance\n2. Withdraw Money\n3. Exit\nChoose an option: ");
            scanf("%d", &choice);

            switch(choice) {
                case 1:
                    printf("Your balance is ₹%d\n", balance);
                    break;
                case 2:
                    printf("Enter amount to withdraw: ₹");
                    scanf("%d", &amount);
                    if(amount <= balance) {
                        balance -= amount;
                        printf("Withdrawal successful! New balance = ₹%d\n", balance);
                    } else {
                        printf("Insufficient balance!\n");
                    }
                    break;
                case 3:
                    printf("Thank you for using the ATM 💳\n");
                    break;
                default:
                    printf("Invalid choice!\n");
            }
        } while(choice != 3);
    } else {
        printf("Incorrect PIN!\n");
    }

    return 0;
}
