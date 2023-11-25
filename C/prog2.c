#include <stdio.h>

int main() {
    // Declare a variable to store temperature in Celsius
    double celsius;

    // Prompt the user to enter temperature in Celsius
    printf("Enter temperature in Celsius: ");

    // Read input from the user
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit
    double fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
