/*
Q108: Product of array except self.
Input: nums = [1,2,3,4] -> Output: [24,12,8,6]
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[n], left[n], right[n], ans[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    left[0] = 1;
    for (int i = 1; i < n; i++) left[i] = left[i - 1] * arr[i - 1];

    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) right[i] = right[i + 1] * arr[i + 1];

    for (int i = 0; i < n; i++) ans[i] = left[i] * right[i];

    printf("[");
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", ans[i]);
    }
    printf("]\n");
    return 0;
}
