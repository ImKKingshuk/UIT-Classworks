#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Define a Queue structure
struct Queue {
    int front, rear;
    int items[MAX_SIZE];
};

// Function to initialize an empty queue
void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmptyQueue(struct Queue *q) {
    return q->front == -1;
}

// Function to check if the queue is full
int isFullQueue(struct Queue *q) {
    return (q->rear + 1) % MAX_SIZE == q->front;
}

// Function to enqueue (insert) an element into the queue
void enqueue(struct Queue *q, int value) {
    if (isFullQueue(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmptyQueue(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX_SIZE;
    q->items[q->rear] = value;
}

// Function to dequeue (remove) an element from the queue
int dequeue(struct Queue *q) {
    if (isEmptyQueue(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX_SIZE;
    }
    return value;
}

int main() {
    // Create a queue
    struct Queue myQueue;
    initializeQueue(&myQueue);

    // Enqueue elements into the queue
    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);
    enqueue(&myQueue, 3);

    // Dequeue elements from the queue and display them
    printf("Dequeued elements: ");
    while (!isEmptyQueue(&myQueue)) {
        printf("%d ", dequeue(&myQueue));
    }

    return 0;
}
