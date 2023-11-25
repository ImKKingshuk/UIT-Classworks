#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for a binary tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    // Create a sample binary tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Display the binary tree using pre-order traversal
    printf("Pre-order traversal: ");
    // Define a recursive function for pre-order traversal
    void preOrderTraversal(struct Node* node) {
        if (node != NULL) {
            printf("%d ", node->data);
            preOrderTraversal(node->left);
            preOrderTraversal(node->right);
        }
    }
    preOrderTraversal(root);

    return 0;
}
