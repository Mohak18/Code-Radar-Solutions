#include <stdio.h>

// Function to print the binary representation of a number
void printBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int num, flippedNum;

    // Taking user input
  
    scanf("%u", &num);

    // Flipping all bits using bitwise NOT (~)
    flippedNum = ~num;

    // Output the original and flipped binary numbers
    printf("Original binary: ");
    printBinary(num);
    
    printf("Flipped binary:  ");
    printBinary(flippedNum);

    return 0;
}
