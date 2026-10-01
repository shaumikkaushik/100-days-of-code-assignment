/*
Q103: Find the pivot index where left sum equals right sum.
Input: nums = [1,7,3,6,5,6] -> Output: 3
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[n], totalSum = 0;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    int leftSum = 0, pivot = -1;
    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }
    printf("%d\n", pivot);
    return 0;
}
