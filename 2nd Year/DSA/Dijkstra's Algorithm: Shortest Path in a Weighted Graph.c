#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MAX_VERTICES 100

// Define a structure for an adjacency list node with weights
struct AdjListNode {
    int dest;
    int weight;
    struct AdjListNode* next;
};

// Define a structure for an adjacency list
struct AdjList {
    struct AdjListNode* head;
};

// Define a structure for a graph with weights
struct Graph {
    int numVertices;
    struct AdjList* array[MAX_VERTICES];
};

// Function to create a new adjacency list node with weight
struct AdjListNode* newAdjListNode(int dest, int weight) {
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with a given number of vertices
struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;

    for (int i = 0; i < numVertices; ++i) {
        graph->array[i] = NULL;
    }

    return graph;
}

// Function to add an edge to a weighted graph
void addEdge(struct Graph* graph, int src, int dest, int weight) {
    // Add an edge from src to dest with the given weight
    struct AdjListNode* newNode = newAdjListNode(dest, weight);
    newNode->next = graph->array[src]->head;
    graph->array[src]->head = newNode;

    // Add an edge from dest to src with the same weight (assuming undirected graph)
    newNode = newAdjListNode(src, weight);
    newNode->next = graph->array[dest]->head;
    graph->array[dest]->head = newNode;
}

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], bool sptSet[], int numVertices) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < numVertices; v++) {
        if (sptSet[v] == false && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Function to print the solution (distances from source to all vertices)
void printSolution(int dist[], int numVertices) {
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < numVertices; i++) {
        printf("%d        %d\n", i, dist[i]);
    }
}

// Function to implement Dijkstra's algorithm for a given graph and source vertex
void dijkstra(struct Graph* graph, int src) {
    int numVertices = graph->numVertices;
    int dist[numVertices];  // Array to store the shortest distance from src to i
    bool sptSet[numVertices];  // Array to mark visited vertices

    // Initialize distances and sptSet
    for (int i = 0; i < numVertices; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    // Distance from source vertex to itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < numVertices - 1; count++) {
        // Pick the minimum distance vertex from the set of vertices not yet processed
        int u = minDistance(dist, sptSet, numVertices);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the picked vertex
        struct AdjListNode* current = graph->array[u]->head;
        while (current != NULL) {
            int v = current->dest;
            if (!sptSet[v] && dist[u] != INT_MAX && dist[u] + current->weight < dist[v]) {
                dist[v] = dist[u] + current->weight;
            }
            current = current->next;
        }
    }

    // Print the solution
    printSolution(dist, numVertices);
}

int main() {
    // Create a weighted graph with 5 vertices
    struct Graph* myGraph = createGraph(5);

    // Add weighted edges to the graph
    addEdge(myGraph, 0, 1, 2);
    addEdge(myGraph, 0, 3, 1);
    addEdge(myGraph, 1, 2, 4);
    addEdge(myGraph, 1, 4, 7);
    addEdge(myGraph, 2, 3, 3);
    addEdge(myGraph, 3, 4, 5);

    // Run Dijkstra's algorithm starting from vertex 0
    printf("Shortest distances from vertex 0 using Dijkstra's algorithm:\n");
    dijkstra(myGraph, 0);

    return 0;
}
