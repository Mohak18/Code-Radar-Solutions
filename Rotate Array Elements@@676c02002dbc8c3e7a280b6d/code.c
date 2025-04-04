#include<stdio.h>

// Function to rotate array to the right by k steps
void rotate(int arr[], int n, int k) {
    int temp[n];
    k = k % n; // In case k > n

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy rotated array back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    // Read size of array
    scanf("%d", &n);

    int arr[n];  // Now n is known, OK in C99 or later

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read k
    scanf("%d", &k);

    rotate(arr, n, k);

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
