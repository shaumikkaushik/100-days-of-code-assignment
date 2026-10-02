/*
Q104: Find pivot integer x such that sum(1..x) equals sum(x..n).
Input: n = 8 -> Output: 6
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter positive integer n: ");
    if (scanf("%d", &n) != 1) return 0;

    int totalSum = n * (n + 1) / 2;
    int ans = -1;
    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = totalSum - (x - 1) * x / 2;
        if (leftSum == rightSum) {
            ans = x;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
