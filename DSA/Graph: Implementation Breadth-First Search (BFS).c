#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 100
#define MAX_QUEUE_SIZE 100

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

// Function to perform breadth-first search (BFS) on a graph
void BFS(struct Graph* graph, int startVertex) {
    // Create a queue for BFS
    int queue[MAX_QUEUE_SIZE];
    int front = -1, rear = -1;

    // Enqueue the start vertex and mark it as visited
    graph->visited[startVertex] = true;
    queue[++rear] = startVertex;

    // Perform BFS
    while (front != rear) {
        // Dequeue a vertex from the queue and print it
        int currentVertex = queue[++front];
        printf("%d ", currentVertex);

        // Enqueue all adjacent vertices of the dequeued vertex that have not been visited
        struct AdjListNode* current = graph->array[currentVertex]->head;
        while (current != NULL) {
            int neighbor = current->dest;
            if (!graph->visited[neighbor]) {
                graph->visited[neighbor] = true;
                queue[++rear] = neighbor;
            }
            current = current->next;
        }
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

    // Perform breadth-first search (BFS) starting from vertex 0
    printf("Breadth-First Search (BFS) starting from vertex 0: ");
    BFS(myGraph, 0);

    return 0;
}
