#include <stdio.h>

long long getBinaryAsNumber(int num) {
    long long binary = 0, place = 1;
    
    while (num > 0) {
        int lastBit = num % 2;  // Get the last binary digit
        binary += lastBit * place;  // Add to binary number
        place *= 10;  // Shift place value
        num /= 2;  // Move to the next bit
    }
    
    return binary;
}

int main() {
    int num;
    
    // Taking user input
   
    scanf("%d", &num);

    // Get binary representation as a number
    long long binaryNumber = getBinaryAsNumber(num);

    // Print the result
    printf("%lld", binaryNumber);

    return 0;
}
