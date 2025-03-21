// Your code here...
#include <stdio.h>

int main() {
    unsigned int num, flippedNum;

    // Taking user input
    
    scanf("%u", &num);

    // Flipping all bits using bitwise NOT (~)
    flippedNum = ~num;

    // Output the result
    printf("%u", flippedNum);

    return 0;
}
