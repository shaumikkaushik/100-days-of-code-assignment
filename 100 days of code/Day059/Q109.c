/*
Q109: Maximum sum of all subarrays of size k.
Input: arr = [100, 200, 300, 400], k = 2 -> Output: 700
*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 0;
    }

    int currentSum = 0;
    for (int i = 0; i < k; i++) currentSum += arr[i];
    int maxSum = currentSum;

    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) maxSum = currentSum;
    }
    printf("%d\n", maxSum);
    return 0;
}
