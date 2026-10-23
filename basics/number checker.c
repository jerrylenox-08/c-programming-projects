// This program checks if a number is positive, negative, or zero.

#include <stdio.h>

int main() {

printf("Enter a number: ");
double number;

scanf("%lf", &number);

if (number > 0) {
    printf("The number is positive.");
}
else if (number < 0) {
    printf("The number is negative.");
}
else {
    printf("The number is zero.");
}

return 0;
}