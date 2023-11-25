#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for an AVL tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    int height;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1; // New node is initially at height 1
    return newNode;
}

// Function to get the height of a node
int height(struct Node* node) {
    if (node == NULL) {
        return 0;
    }
    return node->height;
}

// Function to get the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to perform a right rotation
struct Node* rightRotate(struct Node* y) {
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x; // New root
}

// Function to perform a left rotation
struct Node* leftRotate(struct Node* x) {
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y; // New root
}

// Function to get the balance factor of a node
int getBalance(struct Node* node) {
    if (node == NULL) {
        return 0;
    }
    return height(node->left) - height(node->right);
}

// Function to insert a node into the AVL tree
struct Node* insert(struct Node* node, int value) {
    // Perform standard BST insert
    if (node == NULL) {
        return createNode(value);
    }

    if (value < node->data) {
        node->left = insert(node->left, value);
    } else if (value > node->data) {
        node->right = insert(node->right, value);
    } else {
        // Duplicate values are not allowed in AVL tree
        return node;
    }

    // Update height of the current node
    node->height = 1 + max(height(node->left), height(node->right));

    // Get the balance factor to check if the node became unbalanced
    int balance = getBalance(node);

    // Left Left Case
    if (balance > 1 && value < node->left->data) {
        return rightRotate(node);
    }

    // Right Right Case
    if (balance < -1 && value > node->right->data) {
        return leftRotate(node);
    }

    // Left Right Case
    if (balance > 1 && value > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && value < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Function to print the inorder traversal of the AVL tree
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    // Insert elements into the AVL tree
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    // Print the inorder traversal of the AVL tree
    printf("Inorder traversal: ");
    inorderTraversal(root);

    return 0;
}
