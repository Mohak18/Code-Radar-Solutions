#include <stdio.h>

void rotate(int arr[], int n, int k) {
    for (int r = 0; r < k; r++) {
        int last = arr[n - 1]; // Store the last element

        // Shift all elements to the right by one position
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last; // Put the last element at the front
    }
}

int main() {
    int n, k;

    // Read size of the array
    scanf("%d", &n);

    int arr[n]; // Declare array after knowing the size

    // Read elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read number of rotations
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    rotate(arr, n, k);

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
