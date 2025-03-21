// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    // Taking user input
    
    scanf("%u", &num);

    // Special case: If num is 0, all 32 bits are 0
    if (num == 0) {
        printf("Trailing zeros: 32\n");
        return 0;
    }

    // Counting trailing zeros
    while ((num & 1) == 0) { // Check if the least significant bit (LSB) is 0
        num = num >> 1; // Right shift by 1
        count++;
    }

    // Output the result
    printf("%d", count);

    return 0;
}
