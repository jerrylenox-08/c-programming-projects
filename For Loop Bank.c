#include <stdio.h>
#include <stdbool.h>

#define TOTAL_CUSTOMERS 10

// Function to check qualification
bool check_qualification(unsigned char age, double monthly_income) {
    // Customer must be at least 18 years old AND earn at least Ksh 20,000
    return (age >= 18 && monthly_income >= 20000.0);
}

int main() {
    unsigned char age;
    double monthly_income;

    printf("=========================================\n");
    printf("   BANK ACCOUNT QUALIFICATION SYSTEM     \n");
    printf("        (Processing %d Customers)         \n", TOTAL_CUSTOMERS);
    printf("=========================================\n\n");

    for (int i = 1; i <= TOTAL_CUSTOMERS; i++) {
        printf("--- Customer %d of %d ---\n", i, TOTAL_CUSTOMERS);

        // Get customer inputs
        printf("Enter age: ");
        scanf("%hhu", &age);

        printf("Enter monthly income (Ksh): ");
        scanf("%lf", &monthly_income);

        // Evaluate logic
        if (check_qualification(age, monthly_income)) {
            printf("Status: APPROVED - Customer qualifies for an account.\n\n");
        } else {
            printf("Status: DENIED - Must be at least 18 years old and earn >= Ksh 20,000.\n\n");
        }
    }

    printf("=========================================\n");
    printf(" All %d applications processed.\n", TOTAL_CUSTOMERS);
    printf("=========================================\n");

    return 0;
}