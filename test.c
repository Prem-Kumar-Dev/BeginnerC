#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");

    // Try to read an integer from user input and check the result within the if statement
    if (scanf("%d", &num) == 1) {
        printf("You entered an integer: %d\n", num);
    } else {
        printf("Input is not an integer.\n");
    }

    return 0;
}
