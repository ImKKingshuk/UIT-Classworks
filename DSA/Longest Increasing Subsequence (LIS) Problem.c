// Longest Increasing Subsequence (LIS) Problem

//Solution Approach (Dynamic Programming):
// Let lis(i) be the length of the longest increasing subsequence ending at index i. We can define lis(i) recursively as follows:
// lis(i)=1+max(lis(j))
// where 0≤j<i and arr[j] <arr[i]. The base case is lis(i)=1 for all i because the smallest increasing subsequence is a single element.


#include <stdio.h>

// Function to find the length of the longest increasing subsequence
int LIS(int arr[], int n) {
    int lis[n];

    // Initialize LIS values for all indices
    for (int i = 0; i < n; i++)
        lis[i] = 1;

    // Compute optimized LIS values in a bottom-up manner
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;

    // Find the maximum LIS value
    int maxLIS = 0;
    for (int i = 0; i < n; i++)
        if (lis[i] > maxLIS)
            maxLIS = lis[i];

    return maxLIS;
}

int main() {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Length of Longest Increasing Subsequence: %d\n", LIS(arr, n));

    return 0;
}
