#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an integer
    int* dynamicInt = (int*)malloc(sizeof(int));

    // Check if memory allocation is successful
    if (dynamicInt == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Assign a value to the dynamically allocated integer
    *dynamicInt = 42;

    // Print the value
    printf("Dynamically allocated integer: %d\n", *dynamicInt);

    // Free the dynamically allocated memory
    free(dynamicInt);

    return 0;
}
