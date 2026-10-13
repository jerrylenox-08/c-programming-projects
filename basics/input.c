#include <stdio.h>

int main() {

    char name[50];
    int age;
    float average;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your average mark: ");
    scanf("%f", &average);

    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Average: %.1f\n", average);

    return 0;
}