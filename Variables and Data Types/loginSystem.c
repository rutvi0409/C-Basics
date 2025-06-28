#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if(strcmp(username, "rutvii") == 0 && strcmp(password, "pass123") == 0) {
        printf("Login successful! Welcome, %s \n", username);
    } else {
        printf("Invalid login. Try again!\n");
    }

    return 0;
}
