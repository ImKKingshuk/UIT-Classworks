// Problem Statement:
// Given a set of cities and the distances between each pair of cities, the task is to find the shortest possible tour that visits each city exactly once and returns to the starting city.

// Solution Approach (Dynamic Programming):
// One approach to solving the TSP is to use dynamic programming. The idea is to represent the problem as a bitmask, 
// where each bit represents whether a city has been visited or not. The state of the system is represented by the current city and the set of visited cities.

// The recursive formula for the TSP can be defined as follows:
// TSP(mask,pos)= min(TSP(maskOR(1<<nextCity),nextCity)+distance[pos][nextCity])
// where mask is the bitmask representing the visited cities, pos is the current city, nextCity is the next city to visit, and 
// distance distance[pos][nextCity] is the distance between the current city and the next city.


#include <stdio.h>
#include <limits.h>

#define N 4

// Function to find the minimum of two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to solve the Traveling Salesman Problem using dynamic programming
int tsp(int mask, int pos, int distance[N][N]) {
    // If all cities have been visited, return the distance to the starting city
    if (mask == (1 << N) - 1) {
        return distance[pos][0];
    }

    // Initialize the minimum distance to infinity
    int minDist = INT_MAX;

    // Try to visit unvisited cities
    for (int nextCity = 0; nextCity < N; nextCity++) {
        // If the next city is unvisited
        if ((mask & (1 << nextCity)) == 0) {
            // Recursively calculate the distance for the next state
            int newDist = distance[pos][nextCity] + tsp(mask | (1 << nextCity), nextCity, distance);

            // Update the minimum distance
            minDist = min(minDist, newDist);
        }
    }

    return minDist;
}

int main() {
    int distance[N][N] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    // Start the TSP from the first city (0)
    int startCity = 0;
    int initialMask = 1 << startCity;

    // Calculate the minimum distance for the TSP
    int minDistance = tsp(initialMask, startCity, distance);

    printf("Minimum distance for TSP: %d\n", minDistance);

    return 0;
}
