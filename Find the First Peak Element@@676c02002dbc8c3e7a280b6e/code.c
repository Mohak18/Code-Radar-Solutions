#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the first element is a peak
    if (n == 1 || arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        return 0;
    }

    // Check for peaks in the middle
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d\n", arr[n - 1]);
        return 0;
    }

    return 0;
}
