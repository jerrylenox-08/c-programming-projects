
#include <stdio.h>
int main() {

    float num1, num2;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: "); 
    scanf("%f", &num2);

    printf("Enter operation ( +,-,*,/ ): ");
    scanf(" %c", &operation);

    if (operation == '+') {
        printf("Sum: %.2f\n", num1 + num2);
    }
    else if (operation == '-') {
        printf("Difference: %.2f\n", num1 - num2);
    }
    else if (operation == '*') {
        printf("Product: %.2f\n", num1 * num2);
    }
    else if (operation == '/') {
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 1; // Exit the program with an error code
        }
        printf("Quotient: %.2f\n", num1 / num2);
    }
    else {
        printf("Error: Invalid operation. Please use +, -, *, or /.\n");
        return 1; // Exit the program with an error code
    }

    return 0;
}