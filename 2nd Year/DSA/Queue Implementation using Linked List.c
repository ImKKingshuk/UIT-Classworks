// Queue Implementation using Linked List 

#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for the queue
struct Node {
    int data;
    struct Node* next;
};

// Define a Queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == NULL;
}

// Function to enqueue (insert) an element into the queue
void enqueue(struct Queue* queue, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        // If the queue is empty, the new node becomes both front and rear
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        // Otherwise, add the new node to the rear of the queue
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Function to dequeue (remove) an element from the queue
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Error: Queue underflow\n");
        return -1; // Return an invalid value for an empty queue
    }

    struct Node* temp = queue->front;
    int dequeuedData = temp->data;

    if (queue->front == queue->rear) {
        // If there is only one element in the queue, set front and rear to NULL
        queue->front = NULL;
        queue->rear = NULL;
    } else {
        // Otherwise, move front to the next node in the queue
        queue->front = temp->next;
    }

    free(temp);
    return dequeuedData;
}

// Function to peek at the front element of the queue without removing it
int peek(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Error: Queue is empty\n");
        return -1; // Return an invalid value for an empty queue
    }

    return queue->front->data;
}

int main() {
    // Create an empty queue
    struct Queue myQueue;
    myQueue.front = NULL;
    myQueue.rear = NULL;

    // Enqueue elements into the queue
    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);
    enqueue(&myQueue, 3);

    // Print the front element of the queue
    printf("Front element of the queue: %d\n", peek(&myQueue));

    // Dequeue elements from the queue
    printf("Dequeued element: %d\n", dequeue(&myQueue));
    printf("Dequeued element: %d\n", dequeue(&myQueue));

    // Print the front element of the queue after dequeuing
    printf("Front element of the queue: %d\n", peek(&myQueue));

    return 0;
}
