/*
Q112: Maximum sum of contiguous subarray using Kadane's algorithm.
Input: arr = [2, 3, -8, 7, -1, 2, 3] -> Output: 11
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int maxSoFar = arr[0], currMax = arr[0];
    for (int i = 1; i < n; i++) {
        currMax = (arr[i] > currMax + arr[i]) ? arr[i] : (currMax + arr[i]);
        if (currMax > maxSoFar) maxSoFar = currMax;
    }
    printf("%d\n", maxSoFar);
    return 0;
}
