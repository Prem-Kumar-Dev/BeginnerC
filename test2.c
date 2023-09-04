#include <stdio.h>
#include <stdlib.h>

int main() {
    char expression[] = "5+3*2-10/2"; // Example expression
    int i;
    int num = 0; // Initialize num

    for (i = 0; expression[i] != '\0'; i++) {
        char holder[2] = { expression[i], '\0' }; // Store the current character as a string

        if (holder[0] != '+' && holder[0] != '-' && holder[0] != '*' && holder[0] != '/') {
            int current_num = atoi(holder);
            // Handle the numeric character
            // You can perform calculations or other operations here
            // For example, you can add it to a running total
            num += current_num;
        } else {
            // Handle the operator character
            // You can perform different operations based on the operator here
        }
    }

    printf("Result: %d\n", num);

    return 0;
}
