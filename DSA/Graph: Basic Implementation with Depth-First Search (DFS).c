#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 100

// Define a structure for an adjacency list node
struct AdjListNode {
    int dest;
    struct AdjListNode* next;
};

// Define a structure for an adjacency list
struct AdjList {
    struct AdjListNode* head;
};

// Define a structure for a graph
struct Graph {
    int numVertices;
    struct AdjList* array[MAX_VERTICES];
    bool visited[MAX_VERTICES];
};

// Function to create a new adjacency list node
struct AdjListNode* newAdjListNode(int dest) {
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with a given number of vertices
struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;

    for (int i = 0; i < numVertices; ++i) {
        graph->array[i] = NULL;
        graph->visited[i] = false;
    }

    return graph;
}

// Function to add an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add an edge from src to dest
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src]->head;
    graph->array[src]->head = newNode;

    // Since the graph is undirected, add an edge from dest to src as well
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest]->head;
    graph->array[dest]->head = newNode;
}

// Function to perform depth-first search (DFS) on a graph
void DFS(struct Graph* graph, int vertex) {
    // Mark the current vertex as visited
    graph->visited[vertex] = true;
    printf("%d ", vertex);

    // Recur for all the vertices adjacent to this vertex
    struct AdjListNode* current = graph->array[vertex]->head;
    while (current != NULL) {
        int neighbor = current->dest;
        if (!graph->visited[neighbor]) {
            DFS(graph, neighbor);
        }
        current = current->next;
    }
}

int main() {
    // Create a graph with 5 vertices
    struct Graph* myGraph = createGraph(5);

    // Add edges to the graph
    addEdge(myGraph, 0, 1);
    addEdge(myGraph, 0, 4);
    addEdge(myGraph, 1, 2);
    addEdge(myGraph, 1, 3);
    addEdge(myGraph, 1, 4);
    addEdge(myGraph, 2, 3);
    addEdge(myGraph, 3, 4);

    // Perform depth-first search (DFS) starting from vertex 0
    printf("Depth-First Search (DFS) starting from vertex 0: ");
    DFS(myGraph, 0);

    return 0;
}
