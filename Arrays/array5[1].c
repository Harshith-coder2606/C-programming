#include <stdio.h>

int findMaximum(int arr[], int n);

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMaximum(arr, n);
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

int findMaximum(int arr[], int n) {
    int max = arr[0], i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
