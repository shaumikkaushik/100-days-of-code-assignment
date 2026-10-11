/*
Q113: Find kth smallest element in array.
Input: arr = [7, 10, 4, 3, 20, 15], k = 3 -> Output: 7
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

    // Simple sorting to find kth smallest
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    if (k >= 1 && k <= n) printf("%d\n", arr[k - 1]);
    else printf("Invalid k\n");
    return 0;
}
