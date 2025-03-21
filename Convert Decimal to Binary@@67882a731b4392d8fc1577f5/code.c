// Your code here...
#include <stdio.h>

// Function to print the binary representation of a 32-bit number
void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1); // Extract each bit
    }
    printf("\n");
}

int main() {
    int num, flippedNum;

    // Taking user input

    scanf("%d", &num);

    // Flipping all bits using bitwise NOT (~)
    flippedNum = ~num;

    // Printing original and flipped binary
    printf("Original binary: ");
    printBinary(num);
    
    printf("Flipped binary:  ");
    printBinary(flippedNum);

    return 0;
}
