#include <stdio.h>

int main() {
    int num, pos = 0;

    // Taking user input

    scanf("%d", &num);

    // If number is 0, no set bits exist
    if (num == 0) {
        printf("No set bit found (number is 0).\n");
        return 0;
    }

    // Find the lowest set bit position (0-based)
    while ((num & 1) == 0) {
        num = num >> 1; // Right shift to check next bit
        pos++;
    }

    // Output the position
    printf("%d", pos);

    return 0;
}
