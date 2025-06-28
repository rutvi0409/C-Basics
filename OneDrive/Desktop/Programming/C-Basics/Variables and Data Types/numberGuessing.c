#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;

    srand(time(0));
    number = rand() % 100 + 1; 

    printf("Guess the number between 1 and 100:\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number) {
            printf("Too high! Try again \n");
        } else if (guess < number) {
            printf("Too low! Try again \n");
        } else {
            printf(" Yay! You guessed it right \n");
        }
    } while (guess != number);

    return 0;
}
