#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Define a Stack structure
struct Stack {
    int top;
    int items[MAX_SIZE];
};

// Function to initialize an empty stack
void initializeStack(struct Stack *s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++s->top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->items[s->top--];
}

int main() {
    // Create a stack
    struct Stack myStack;
    initializeStack(&myStack);

    // Push elements onto the stack
    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);

    // Pop elements from the stack and display them
    printf("Popped elements: ");
    while (!isEmpty(&myStack)) {
        printf("%d ", pop(&myStack));
    }

    return 0;
}
