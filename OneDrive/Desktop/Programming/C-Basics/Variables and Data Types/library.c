#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[3];


    for (int i = 0; i < 3; i++) {
        printf("Enter details of Book %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &library[i].id);
        getchar();  
        printf("Title: ");
        gets(library[i].title);
        printf("Author: ");
        gets(library[i].author);
    }

    int searchId;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    int found = 0;
    for (int i = 0; i < 3; i++) {
        if (library[i].id == searchId) {
            printf("Book Found!\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found in the system.\n");

    return 0;
}
