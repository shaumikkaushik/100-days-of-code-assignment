/*
Q118: Find missing number in array containing 0 to n except one.
Input: nums = [0,3,2,4] -> Output: 1
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 0;
    int actualSum = 0, val;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        actualSum += val;
    }
    int expectedSum = n * (n + 1) / 2;
    printf("%d\n", expectedSum - actualSum);
    return 0;
}
