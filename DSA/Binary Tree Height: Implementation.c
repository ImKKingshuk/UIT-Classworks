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

// Function to find the height of a binary tree
int findHeight(struct Node* root) {
    if (root == NULL) {
        return -1; // Height of an empty tree is -1
    } else {
        // Calculate the height of the left and right subtrees
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);

        // Return the maximum height plus 1
        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
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

    // Finding the height of the binary tree
    int height = findHeight(root);

    printf("Height of the binary tree: %d\n", height);

    return 0;
}
