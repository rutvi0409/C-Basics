#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Enter a number to find factorial: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}
