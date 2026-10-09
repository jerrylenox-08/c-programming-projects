
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
        if (num2 != 0) {
            printf("Quotient: %.2f\n", num1 / num2);
        }
        else {
            printf("Error: Cannot divide by zero.\n");
        }
    }
    else {
        printf("Invalid operation.\n");
    }

    return 0;
}