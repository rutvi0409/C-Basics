#include <stdio.h>

int main() {
    int servings;
    float sugar = 2.5, flour = 1.5, milk = 1.0; // For 1 serving

    printf("Enter number of servings: ");
    scanf("%d", &servings);

    printf("\n Ingredients Needed for %d Serving(s):\n", servings);
    printf("Sugar: %.2f cups\n", sugar * servings);
    printf("Flour: %.2f cups\n", flour * servings);
    printf("Milk : %.2f cups\n", milk * servings);

    return 0;
}
