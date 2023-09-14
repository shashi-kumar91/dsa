#include <stdio.h>

int max(int arr[], int n) {
    int i = 0, max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n) {
    int i = 0, min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void counting_sort(int arr[], int n, int x, int y) {
    int range = y - x + 1;
    int count[range];
    int output[n];

    // Initialize count array with 0s
    for (int i = 0; i < range; i++) {
        count[i] = 0;
    }

    // Count the occurrences of each element in arr
    for (int i = 0; i < n; i++) {
        count[arr[i] - x]++;
    }

    // Calculate cumulative count
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i] - x] - 1] = arr[i];
        count[arr[i] - x]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int n, i, low, high, x, y;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    x = min(arr, n);
    y = max(arr, n);
    printf("The min element in the array: %d\n", x);
    printf("The max element in the array: %d\n", y);

    low = x;
    high = y;
    counting_sort(arr, n, low, high);

    printf("Array after Counting Sort: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

