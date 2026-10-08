/*
Q110: Maximum element in each subarray of size k.
Input: arr = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3 -> Output: 3 3 4 5 5 5 6
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

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) maxVal = arr[i + j];
        }
        if (i > 0) printf(" ");
        printf("%d", maxVal);
    }
    printf("\n");
    return 0;
}
