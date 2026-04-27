#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    int secret = 12345;

    printf("Enter your name: ");

    if (fgets(buffer, sizeof(buffer), stdin)) {
        buffer[strcspn(buffer, "\n")] = 0; // remove newline
        printf("Hello, %s!\n", buffer);
        printf("Secret value: %d\n", secret);
    } else {
        printf("Input error.\n");
    }

    return 0;
}