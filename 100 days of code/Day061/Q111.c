/*
Q111: First negative integer in each subarray of size k.
Input: arr = [-8, 2, 3, -6, 10], k = 2 -> Output: -8 0 -6 -6
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
        int firstNeg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNeg = arr[i + j];
                break;
            }
        }
        if (i > 0) printf(" ");
        printf("%d", firstNeg);
    }
    printf("\n");
    return 0;
}
