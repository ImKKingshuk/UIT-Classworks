#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 7;

    // Call the swap function
    swap(&num1, &num2);

    // Display the swapped values
    printf("Swapped values: %d and %d\n", num1, num2);

    return 0;
}
