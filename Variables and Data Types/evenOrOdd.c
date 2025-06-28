#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is EVEN.\n", num);
    } else {
        printf("%d is ODD.\n", num);
    }

    return 0;
}
