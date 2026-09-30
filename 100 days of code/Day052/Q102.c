/*
Q102: Ceil of x in sorted array (smallest element >= x).
Input: arr = [1, 2, 8, 10, 11, 12, 19], x = 5 -> Output: 2
*/
#include <stdio.h>

int main() {
    int n, x;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter x: ");
    scanf("%d", &x);

    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
