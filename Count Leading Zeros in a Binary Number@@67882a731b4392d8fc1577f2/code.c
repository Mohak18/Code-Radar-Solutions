// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    // Taking user input

    scanf("%u", &num);

    // Special case: If num is 0, all 32 bits are 0
    if (num == 0) {
        printf("Leading zeros: 32\n");
        return 0;
    }

    // Counting leading zeros
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) // If a 1 is found, stop
            break;
        count++;
    }

    // Output the result
    printf("%d", count);

    return 0;
}
