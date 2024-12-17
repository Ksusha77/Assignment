#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Try again.\n");
    }
    return 0;
}
