17
#include <stdio.h>
#include <stdbool.h>

// Function to check qualification
bool check_qualification(unsigned char age, double monthly_income) {
    // Both conditions must be true: age >= 18 AND income >= 20000
    if (age >= 18 && monthly_income >= 20000.0) {
        return true;
    }
    return false;
}

int main() {
    unsigned char age;
    double monthly_income;

    printf("=== Bank Account Qualification Check ===\n\n");

    // Get user input
    printf("Enter customer age: ");
    scanf("%hhu", &age);

    printf("Enter monthly income (Ksh): ");
    scanf("%lf", &monthly_income);

    // Evaluate qualification
    if (check_qualification(age, monthly_income)) {
        printf("\nRESULT: APPROVED! The customer qualifies for an account.\n");
    } else {
        printf("\nRESULT: DENIED! Customer must be at least 18 years old and earn at least Ksh 20,000/month.\n");
    }

    return 0;
}