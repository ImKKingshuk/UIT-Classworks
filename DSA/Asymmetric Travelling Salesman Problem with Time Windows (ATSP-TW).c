// Asymmetric Travelling Salesman Problem with Time Windows (ATSP-TW)


// Problem Statement:
// In the ATSP-TW, the task is to find the shortest route that visits a set of cities, starting and ending at the same city, while respecting the given time windows for each city. Each city must be visited exactly once, and the objective is to minimize the total travel time.

// Additional Constraints:
// The time windows specify a range during which the salesman must arrive at each city.
// The travel time between cities is asymmetric (i.e., the time to travel from city A to city B may be different from the time to travel from city B to city A).
// The salesman cannot leave a city before its time window opens, and they must arrive before its time window closes.

// Solution Approach:
// Solving the ATSP-TW is significantly more complex than the classic TSP. It often requires the application of advanced optimization techniques, such as Mixed-Integer Linear Programming (MILP), Branch and Bound, or sophisticated heuristic algorithms.

// Here's an outline of an approach using a heuristic algorithm like Ant Colony Optimization (ACO) or Genetic Algorithms (GA):
// Initialization: Generate an initial population of candidate solutions (tours). Evaluate the fitness of each solution based on total travel time and adherence to time windows.
// Iteration: Apply operators like crossover and mutation to create new candidate solutions. Evaluate the fitness of the new solutions.
// Selection: Select a subset of solutions for the next iteration, favoring those with better fitness.
// Termination: Repeat the iteration process until a termination condition is met (e.g., a maximum number of iterations or convergence criteria).



// Simplified version of the ATSP-TW:

#include <stdio.h>
#include <limits.h>

#define N 5  // Number of cities

// Structure to represent a city
struct City {
    int x, y;   // Coordinates
    int open, close;   // Time window [open, close]
};

// Function to calculate the Euclidean distance between two cities
int distance(struct City a, struct City b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

// Function to find the nearest unvisited city
int nearestNeighbor(int currentCity, int visited[], struct City cities[]) {
    int minDistance = INT_MAX;
    int nearestCity = -1;

    for (int i = 0; i < N; i++) {
        if (!visited[i] && i != currentCity && cities[i].open <= cities[currentCity].close) {
            int dist = distance(cities[currentCity], cities[i]);
            if (dist < minDistance) {
                minDistance = dist;
                nearestCity = i;
            }
        }
    }

    return nearestCity;
}

// Function to perform the Nearest Neighbor Algorithm
void nearestNeighborAlgorithm(struct City cities[]) {
    int tour[N];  // Store the final tour
    int visited[N];  // Keep track of visited cities

    // Start the tour from the first city
    tour[0] = 0;
    visited[0] = 1;

    // Iterate over the remaining cities
    for (int i = 1; i < N; i++) {
        int currentCity = tour[i - 1];
        tour[i] = nearestNeighbor(currentCity, visited, cities);
        visited[tour[i]] = 1;
    }

    // Print the final tour
    printf("Tour: ");
    for (int i = 0; i < N; i++) {
        printf("%d -> ", tour[i]);
    }
    printf("%d\n", tour[0]);
}

int main() {
    struct City cities[N] = {
        {0, 0, 0, 10},
        {1, 2, 4, 15},
        {3, 1, 8, 20},
        {5, 2, 12, 25},
        {8, 4, 15, 30}
    };

    nearestNeighborAlgorithm(cities);

    return 0;
}
