// Binary Tree Level Order Traversal: Implementation

#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for the binary tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node with a given data value
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform level order traversal (Breadth-First Traversal) of a binary tree
void levelOrderTraversal(struct Node* root) {
    // Check if the tree is empty
    if (root == NULL) {
        return;
    }

    // Create a queue for level order traversal
    struct Node* queue[100];
    int front = -1, rear = -1;

    // Enqueue the root
    queue[++rear] = root;

    while (front != rear) {
        // Dequeue a node and print its data
        struct Node* current = queue[++front];
        printf("%d ", current->data);

        // Enqueue the left child if it exists
        if (current->left != NULL) {
            queue[++rear] = current->left;
        }

        // Enqueue the right child if it exists
        if (current->right != NULL) {
            queue[++rear] = current->right;
        }
    }
}

int main() {
    // Creating a simple binary tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Performing level order traversal
    printf("Level Order Traversal: ");
    levelOrderTraversal(root);
    printf("\n");

    return 0;
}
