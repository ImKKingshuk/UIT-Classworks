#include <stdio.h>

int main() {
    // Declare variables to store three numbers
    double num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    
    // Read input from the user
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Calculate the sum
    double sum = num1 + num2 + num3;

    // Calculate the average
    double average = sum / 3;

    // Display the results
    printf("Sum: %.2lf\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}
