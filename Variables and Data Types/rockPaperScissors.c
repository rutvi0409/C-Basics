#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;
    
    printf("Choose:\n0 - Rock\n1 - Paper\n2 - Scissors\nEnter your choice: ");
    scanf("%d", &user);

    srand(time(0));
    computer = rand() % 3;

    printf("Computer chose: %d\n", computer);

    if (user == computer)
        printf("It's a tie!\n");
    else if ((user == 0 && computer == 2) || 
             (user == 1 && computer == 0) || 
             (user == 2 && computer == 1))
        printf("You win! \n");
    else
        printf("You lose! \n");

    return 0;
}
