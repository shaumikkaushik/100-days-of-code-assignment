/*
Q106: Next greater element for each element using brute force.
Input: arr = [1, 3, 2, 4] -> Output: 3, 4, 4, -1
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
        int nge = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break;
            }
        }
        if (i > 0) printf(", ");
        printf("%d", nge);
    }
    printf("\n");
    return 0;
}
