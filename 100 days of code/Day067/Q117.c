/*
Q117: Merge two sorted arrays into one sorted array.
Input: nums1 = [2,7,11,15], nums2 = [4,8,10] -> Output: 2 4 7 8 10 11 15
*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes of array 1 and array 2: ");
    if (scanf("%d %d", &m, &n) != 2) return 0;
    int a[m], b[n], res[m + n];
    printf("Enter elements of array 1: ");
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Enter elements of array 2: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < m) res[k++] = a[i++];
    while (j < n) res[k++] = b[j++];

    for (int x = 0; x < m + n; x++) {
        if (x > 0) printf(" ");
        printf("%d", res[x]);
    }
    printf("\n");
    return 0;
}
