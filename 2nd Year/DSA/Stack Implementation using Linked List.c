// Stack Implementation using Linked List

#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for the stack
struct Node {
    int data;
    struct Node* next;
};

// Define a Stack structure
struct Stack {
    struct Node* top;
};

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow\n");
        return -1; // Return an invalid value for an empty stack
    }

    struct Node* temp = stack->top;
    int poppedData = temp->data;
    stack->top = temp->next;
    free(temp);

    return poppedData;
}

// Function to peek at the top element of the stack without removing it
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty\n");
        return -1; // Return an invalid value for an empty stack
    }

    return stack->top->data;
}

int main() {
    // Create an empty stack
    struct Stack myStack;
    myStack.top = NULL;

    // Push elements onto the stack
    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);

    // Print the top element of the stack
    printf("Top element of the stack: %d\n", peek(&myStack));

    // Pop elements from the stack
    printf("Popped element: %d\n", pop(&myStack));
    printf("Popped element: %d\n", pop(&myStack));

    // Print the top element of the stack after popping
    printf("Top element of the stack: %d\n", peek(&myStack));

    return 0;
}
