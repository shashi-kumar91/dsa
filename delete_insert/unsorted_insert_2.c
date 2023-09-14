#include<stdio.h>

void insert(int arr[], int n, int key, int position) {
    for (int i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = key;
}

int main() {
    int position, n = 7, key;
    int arr[10] = {8, 5, 1, 88, 6, 5, 6};

    printf("Enter the key you want to insert and where you want to insert: ");
    scanf("%d %d", &key, &position);

    insert(arr, n, key, position);

    printf("The elements after inserting:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
