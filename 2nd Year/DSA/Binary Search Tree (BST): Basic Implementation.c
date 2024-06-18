// Binary Search Tree (BST): Basic Implementation

#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for the binary search tree (BST)
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

// Function to insert a new node into the BST
struct Node* insert(struct Node* root, int data) {
    // If the tree is empty, create a new node
    if (root == NULL) {
        return createNode(data);
    }

    // Otherwise, recur down the tree
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    // Return the unchanged node pointer
    return root;
}

// Function to perform an in-order traversal of the BST
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to search for a key in the BST
struct Node* search(struct Node* root, int key) {
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key) {
        return root;
    }

    // Key is greater than root's key
    if (key > root->data) {
        return search(root->right, key);
    }

    // Key is smaller than root's key
    return search(root->left, key);
}

int main() {
    struct Node* root = NULL;

    // Insert elements into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Perform in-order traversal
    printf("In-order Traversal: ");
    inOrderTraversal(root);
    printf("\n");

    // Search for a key in the BST
    int keyToSearch = 40;
    struct Node* result = search(root, keyToSearch);
    if (result != NULL) {
        printf("%d found in the BST.\n", keyToSearch);
    } else {
        printf("%d not found in the BST.\n", keyToSearch);
    }

    return 0;
}
