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

// Function to find the node with the minimum key value in a BST
struct Node* findMin(struct Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to perform the deletion operation in a BST
struct Node* deleteNode(struct Node* root, int key) {
    // Base Case: If the tree is empty
    if (root == NULL) {
        return root;
    }

    // Recur down the tree
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        struct Node* temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }

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

int main() {
    struct Node* root = NULL;

    // Insert elements into the BST
    root = createNode(50);
    root->left = createNode(30);
    root->right = createNode(70);
    root->left->left = createNode(20);
    root->left->right = createNode(40);
    root->right->left = createNode(60);
    root->right->right = createNode(80);

    // Perform in-order traversal
    printf("In-order Traversal (before deletion): ");
    inOrderTraversal(root);
    printf("\n");

    // Delete a node from the BST
    int keyToDelete = 30;
    root = deleteNode(root, keyToDelete);

    // Perform in-order traversal after deletion
    printf("In-order Traversal (after deletion of %d): ", keyToDelete);
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
