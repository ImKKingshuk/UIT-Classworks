#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to print the elements of the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to insert a new node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    return newNode; // The new node becomes the new head
}

// Function to insert a new node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    // If the list is empty, the new node becomes the head
    if (head == NULL) {
        return newNode;
    }

    // Traverse to the end of the list and add the new node
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    return head; // Head remains unchanged
}

int main() {
    // Creating an empty linked list
    struct Node* head = NULL;

    // Inserting elements into the linked list
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);

    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);

    // Printing the linked list
    printf("Linked List: ");
    printList(head);

    return 0;
}
