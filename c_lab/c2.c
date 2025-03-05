#include <stdio.h>
int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, high, target);
    } else {
        return binarySearch(arr, low, mid - 1, target);
    }
}
int main() {
    int n, i, target, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &target);
    result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
