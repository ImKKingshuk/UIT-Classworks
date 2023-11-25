#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;

    // Call the factorial function
    int result = factorial(num);

    // Display the result
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}
