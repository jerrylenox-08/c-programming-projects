#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declarations
    unsigned char age = 28;
    double income = 75500.50;
    double account_balance = -120.75;
    bool is_qualified = true;

    // Display values
    printf("Age: %u years\n", age);
    printf("Monthly Income: $%.2f\n", income);
    printf("Account Balance: $%.2f\n", account_balance);
    printf("Qualified Status: %s\n", is_qualified ? "Qualified" : "Not Qualified");

    return 0;
}