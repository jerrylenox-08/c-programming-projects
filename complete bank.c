#include <stdio.h>
#include <stdbool.h>

#define TOTAL_CUSTOMERS 10

/**
 * Evaluates account qualification.
 * Customer qualifies if they are at least 18 years old 
 * OR have a monthly income of at least Ksh 20,000.
 *
 * @param age Applicant's age in years
 * @param monthly_income Applicant's monthly earnings in Ksh
 * @return true if approved, false if denied
 */
bool check_qualification(unsigned char age, double monthly_income) {
    return (age >= 18 || monthly_income >= 20000.0);
}

int main(void) {
    unsigned char age;
    double monthly_income;

    printf("=========================================\n");
    printf("   BANK ACCOUNT QUALIFICATION SYSTEM     \n");
    printf("        (Processing %d Customers)         \n", TOTAL_CUSTOMERS);
    printf("=========================================\n\n");

    for (int i = 1; i <= TOTAL_CUSTOMERS; i++) {
        printf("--- Customer %d of %d ---\n", i, TOTAL_CUSTOMERS);

        // Input Age
        printf("Enter age: ");
        if (scanf("%hhu", &age) != 1) {
            printf("Invalid input for age. Exiting program.\n");
            return 1;
        }

        // Input Monthly Income
        printf("Enter monthly income (Ksh): ");
        if (scanf("%lf", &monthly_income) != 1) {
            printf("Invalid input for income. Exiting program.\n");
            return 1;
        }

        // Evaluate and Display Result
        if (check_qualification(age, monthly_income)) {
            printf("Status: APPROVED - Customer meets qualification criteria.\n\n");
        } else {
            printf("Status: DENIED - Must be at least 18 years old OR earn >= Ksh 20,000.\n\n");
        }
    }

    printf("=========================================\n");
    printf(" All %d applications successfully processed.\n", TOTAL_CUSTOMERS);
    printf("=========================================\n");

    return 0;
}