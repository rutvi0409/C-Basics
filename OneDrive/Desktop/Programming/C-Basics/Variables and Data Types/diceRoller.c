#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice;

    srand(time(0)); // Seed random number generator

    dice = (rand() % 6) + 1; // Random number between 1 and 6

    printf("You rolled a %d!\n", dice);

    return 0;
}
