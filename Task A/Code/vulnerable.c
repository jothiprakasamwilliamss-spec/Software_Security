#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    int secret = 12345;  // Sensitive variable

    printf("Enter your name: ");
    gets(buffer);

    printf("Hello, %s!\n", buffer);
    printf("Secret value: %d\n", secret);

    return 0;
}