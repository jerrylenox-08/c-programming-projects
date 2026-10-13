
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
        printf("Quotient: %.2f\n", num1 / num2);
    }

    return 0;
}