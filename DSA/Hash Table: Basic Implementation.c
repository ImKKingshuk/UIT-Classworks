#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// Define a structure for a key-value pair
struct KeyValue {
    char key[20];
    int value;
};

// Define a structure for a hash node
struct HashNode {
    struct KeyValue kv;
    struct HashNode* next;
};

// Define a hash table
struct HashTable {
    struct HashNode* table[TABLE_SIZE];
};

// Function to initialize a hash table
void initializeHashTable(struct HashTable* ht) {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        ht->table[i] = NULL;
    }
}

// Function to calculate the hash value for a key
int hash(char* key) {
    int hashValue = 0;
    for (int i = 0; key[i] != '\0'; ++i) {
        hashValue += key[i];
    }
    return hashValue % TABLE_SIZE;
}

// Function to insert a key-value pair into the hash table
void insert(struct HashTable* ht, char* key, int value) {
    // Create a new hash node
    struct HashNode* newNode = (struct HashNode*)malloc(sizeof(struct HashNode));
    strcpy(newNode->kv.key, key);
    newNode->kv.value = value;
    newNode->next = NULL;

    // Calculate the hash value
    int index = hash(key);

    // Insert the new node into the hash table
    if (ht->table[index] == NULL) {
        ht->table[index] = newNode;
    } else {
        newNode->next = ht->table[index];
        ht->table[index] = newNode;
    }
}

// Function to search for a key in the hash table and return its value
int search(struct HashTable* ht, char* key) {
    // Calculate the hash value
    int index = hash(key);

    // Search for the key in the linked list at the calculated index
    struct HashNode* current = ht->table[index];
    while (current != NULL) {
        if (strcmp(current->kv.key, key) == 0) {
            // Key found, return its value
            return current->kv.value;
        }
        current = current->next;
    }

    // Key not found
    return -1;
}

int main() {
    struct HashTable myHashTable;
    initializeHashTable(&myHashTable);

    // Insert key-value pairs into the hash table
    insert(&myHashTable, "Alice", 25);
    insert(&myHashTable, "Bob", 30);
    insert(&myHashTable, "Charlie", 35);

    // Search for values using keys
    printf("Value for Alice: %d\n", search(&myHashTable, "Alice"));
    printf("Value for Bob: %d\n", search(&myHashTable, "Bob"));
    printf("Value for Charlie: %d\n", search(&myHashTable, "Charlie"));

    return 0;
}
