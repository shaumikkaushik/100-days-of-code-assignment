/*
Q101: First and last occurrence of target in sorted array.
Input: nums = [5,7,7,8,8,10], target = 8 -> Output: 3,4
*/
#include <stdio.h>

int main() {
    int n, target;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    return 0;
}
