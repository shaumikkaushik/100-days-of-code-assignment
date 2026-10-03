/*
Q105: Majority element (element that appears strictly more than n / 2 times).
Input: nums = [3,2,3] -> Output: 3
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int candidate = arr[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) count++;
        else count--;
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) freq++;
    }

    if (freq > n / 2) printf("%d\n", candidate);
    else printf("-1\n");
    return 0;
}
