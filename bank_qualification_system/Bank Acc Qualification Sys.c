  #include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Customer profile structure
typedef struct {
    char name[50];
    unsigned char age;
    double monthly_income;
    double initial_deposit;
    bool kyc_verified;
} Customer;

// Account Qualification Status
typedef enum {
    DENIED = 0,
    STUDENT_ACCOUNT,
    STANDARD_ACCOUNT,
    PREMIUM_ACCOUNT
} AccountType;

// Core Logic Function
AccountType evaluate_qualification(const Customer *user) {
    // Basic requirement: MUST be KYC verified and at least 18
    if (!user->kyc_verified || user->age < 18) {
        return DENIED;
    }

    // Qualification rules hierarchy
    if (user->age >= 21 && user->monthly_income >= 5000.0 && user->initial_deposit >= 10000.0) {
        return PREMIUM_ACCOUNT;
    } 
    else if (user->age <= 25 && user->initial_deposit >= 10.0) {
        return STUDENT_ACCOUNT;
    } 
    else if (user->monthly_income >= 1000.0 && user->initial_deposit >= 100.0) {
        return STANDARD_ACCOUNT;
    } 

    return DENIED;
}

int main() {
    // Sample Customer
    Customer applicant = {
        .name = "Alex Johnson",
        .age = 24,
        .monthly_income = 3200.00,
        .initial_deposit = 500.00,
        .kyc_verified = true
    };

    AccountType result = evaluate_qualification(&applicant);

    printf("Applicant: %s\n", applicant.name);
    printf("Decision: ");
    switch (result) {
        case PREMIUM_ACCOUNT:
            printf("APPROVED for Premium Tier\n");
            break;
        case STANDARD_ACCOUNT:
            printf("APPROVED for Standard Tier\n");
            break;
        case STUDENT_ACCOUNT:
            printf("APPROVED for Student Tier\n");
            break;
        default:
            printf("REJECTED - Criteria not met or identity unverified\n");
            break;
    }

    return 0;
}