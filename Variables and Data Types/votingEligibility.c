#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote! \n");
    } else {
        printf("Sorry! You must be at least 18 to vote.\n");
    }

    return 0;
}
