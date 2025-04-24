#include <stdio.h>
#include "lib/operation.h" // Include your library header file

int main() {
    int a = 0, b = 0;  // Variables for user input
    char ch;           // Variable for operation choice

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    while (1) {
        printf("Press 1-Arithmetic 2-Bitwise 3-Relational (press q to quit): ");
        scanf(" %c", &ch);  // Adding space before %c to ignore previous newline character

        if (ch == 'q') {
            printf("Exiting the program.\n");
            break; // Exit the loop and program
        }

        switch (ch) {
            case '1': // Arithmetic operations
                printf("Addition: %d\n", add(a, b));
                printf("Subtraction: %d\n", subtract(a, b));
                printf("Multiplication: %d\n", multiply(a, b));
                if (b != 0) {
                    printf("Division: %d\n", divide(a, b));
                    printf("Modulus: %d\n", modulus(a, b));
                } else {
                    printf("Error: Division or modulus by zero is not allowed.\n");
                }
                break;

            case '2': // Bitwise operations
                printf("Bitwise AND: %d\n", bitwise_and(a, b));
                printf("Bitwise OR: %d\n", bitwise_or(a, b));
                printf("Bitwise XOR: %d\n", bitwise_xor(a, b));
                printf("Bitwise NOT (a): %d\n", bitwise_not(a));
                printf("Left Shift (a << 2): %d\n", left_shift(a, 2));
                printf("Right Shift (a >> 2): %d\n", right_shift(a, 2));
                break;

            case '3': // Relational operations
                printf("Is Equal: %d\n", is_equal(a, b));
                printf("Is Not Equal: %d\n", is_not_equal(a, b));
                printf("Is Greater: %d\n", is_greater(a, b));
                printf("Is Lesser: %d\n", is_lesser(a, b));
                printf("Is Greater or Equal: %d\n", is_greater_equal(a, b));
                printf("Is Lesser or Equal: %d\n", is_lesser_equal(a, b));
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}