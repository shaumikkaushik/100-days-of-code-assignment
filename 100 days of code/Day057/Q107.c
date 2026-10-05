/*
Q107: Previous greater element for each element using brute force.
Input: arr = [1, 3, 2, 4] -> Output: -1, -1, 3, -1
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int pge = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j];
                break;
            }
        }
        if (i > 0) printf(", ");
        printf("%d", pge);
    }
    printf("\n");
    return 0;
}
